#include <sw/redis++/redis++.h>

#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <ylt/struct_pack.hpp>

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
    std::string province;
    std::string city;
    std::string zip;
    std::string areaCode;
    std::string cardType;
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
        std::getline(file, info.province, '|');
        std::getline(file, info.city, '|');
        std::getline(file, info.zip, '|');
        std::getline(file, info.areaCode, '\0');
        info.cardType = record.cardType;
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