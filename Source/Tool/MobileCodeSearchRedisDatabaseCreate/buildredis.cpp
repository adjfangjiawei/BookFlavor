#include <sw/redis++/redis++.h>

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <ylt/struct_pack.hpp>
enum class Province {
    Unknown,
    Anhui,
    Beijing,
    Chongqing,
    Fujian,
    Gansu,
    Guangdong,
    Guangxi,
    Guizhou,
    Hainan,
    Hebei,
    Heilongjiang,
    Henan,
    Hubei,
    Hunan,
    InnerMongolia,
    Jiangsu,
    Jiangxi,
    Jilin,
    Liaoning,
    Ningxia,
    Qinghai,
    Shaanxi,
    Shandong,
    Shanghai,
    Shanxi,
    Sichuan,
    Tianjin,
    Tibet,
    Xinjiang,
    Yunnan,
    Zhejiang,
    HongKong,
    Macau
};

inline std::map<std::string, Province> provinceMap = {
    {"安徽", Province::Anhui},          {"北京", Province::Beijing},  {"重庆", Province::Chongqing}, {"福建", Province::Fujian},   {"甘肃", Province::Gansu},
    {"广东", Province::Guangdong},      {"广西", Province::Guangxi},  {"贵州", Province::Guizhou},   {"海南", Province::Hainan},   {"河北", Province::Hebei},
    {"黑龙江", Province::Heilongjiang}, {"河南", Province::Henan},    {"湖北", Province::Hubei},     {"湖南", Province::Hunan},    {"内蒙古", Province::InnerMongolia},
    {"江苏", Province::Jiangsu},        {"江西", Province::Jiangxi},  {"吉林", Province::Jilin},     {"辽宁", Province::Liaoning}, {"宁夏", Province::Ningxia},
    {"青海", Province::Qinghai},        {"陕西", Province::Shaanxi},  {"山东", Province::Shandong},  {"上海", Province::Shanghai}, {"山西", Province::Shanxi},
    {"四川", Province::Sichuan},        {"天津", Province::Tianjin},  {"西藏", Province::Tibet},     {"新疆", Province::Xinjiang}, {"云南", Province::Yunnan},
    {"浙江", Province::Zhejiang},       {"香港", Province::HongKong}, {"澳门", Province::Macau}};

inline Province stringToProvince(const std::string& provinceName) {
    auto it = provinceMap.find(provinceName);
    if (it != provinceMap.end()) {
        return it->second;
    } else {
        return Province::Unknown;
    }
}

enum class Carrier { Unknown, CUCC, CTCC, CTCC_v, CUCC_v, CMCC_v, CBCC, CBCC_v };
struct IndexRecord {
    int phonePrefix;
    int recordOffset;
    char cardType;
};

struct DataRecord {
    std::string province;
    std::string city;
    std::string zip;
    std::string areaCode;
};

std::vector<IndexRecord> indexRecords;
std::vector<DataRecord> dataRecords;

class RdbPhoneNumberInfo {
  public:
    Province province;
    std::string city;
    int zip;
    int areaCode;
    Carrier cardType;
};
STRUCT_PACK_REFL(RdbPhoneNumberInfo, province, city, zip, areaCode, cardType);
// 电话号码前缀 -> 电话号码信息
std::unordered_map<int, RdbPhoneNumberInfo> phoneNumberInfos;

void readDatFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);

    int version;
    int firstIndexOffset;

    // 读取头部
    file.read(reinterpret_cast<char*>(&version), 4);
    file.read(reinterpret_cast<char*>(&firstIndexOffset), 4);

    // 读取记录区
    file.seekg(8, std::ios::beg);
    while (file.tellg() < firstIndexOffset) {
        DataRecord record;
        std::getline(file, record.province, '|');
        std::getline(file, record.city, '|');
        std::getline(file, record.zip, '|');
        std::getline(file, record.areaCode, '\0');
        dataRecords.push_back(record);
    }

    // 读取索引区
    file.seekg(firstIndexOffset, std::ios::beg);
    while (!file.eof()) {
        IndexRecord record;
        file.read(reinterpret_cast<char*>(&record.phonePrefix), 4);
        file.read(reinterpret_cast<char*>(&record.recordOffset), 4);
        file.read(&record.cardType, 1);
        indexRecords.push_back(record);
    }
    file.close();
    file.open(filename, std::ios::binary);
    // 遍历索引记录
    for (auto& record : indexRecords) {
        // 通过索引区的记录偏移量读取记录区的记录
        file.seekg(record.recordOffset, std::ios::beg);
        RdbPhoneNumberInfo info;
        std::string province;
        std::getline(file, province, '|');
        info.province = stringToProvince(province);
        std::getline(file, info.city, '|');
        std::string zip;
        std::getline(file, zip, '|');
        info.zip = std::stoi(zip);
        std::string areaCode;
        std::getline(file, areaCode, '\0');
        info.areaCode = std::stoi(areaCode);
        auto cardType = record.cardType;
        int cardTypeInt = static_cast<int>(cardType);
        info.cardType = static_cast<Carrier>(cardTypeInt);
        phoneNumberInfos[record.phonePrefix] = info;
    }

    file.close();

    // 创建一个Redis对象，连接到默认的localhost:6666
    sw::redis::Redis redis{"tcp://127.0.0.1:6666"};

    for (auto& [key, value] : phoneNumberInfos) {
        // 设置一个键值对
        auto val = struct_pack::serialize(value);
        auto strval = std::string(val.begin(), val.end());
        redis.set(std::to_string(key), strval);
    }
}

int main() {
    readDatFile("Resource/MobileCodeSearch.dat");
    return 0;
}