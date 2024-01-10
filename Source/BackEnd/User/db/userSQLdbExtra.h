#pragma once

#include <phonenumbers/phonenumberutil.h>

namespace UserSQLdb {
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

    inline std::string ProvinceToString(Province province) {
        static const std::map<Province, std::string> provinceMap = {
            {Province::Unknown, "Unknown"},    {Province::Anhui, "Anhui"},       {Province::Beijing, "Beijing"},     {Province::Chongqing, "Chongqing"},
            {Province::Fujian, "Fujian"},      {Province::Gansu, "Gansu"},       {Province::Guangdong, "Guangdong"}, {Province::Guangxi, "Guangxi"},
            {Province::Guizhou, "Guizhou"},    {Province::Hainan, "Hainan"},     {Province::Hebei, "Hebei"},         {Province::Heilongjiang, "Heilongjiang"},
            {Province::Henan, "Henan"},        {Province::Hubei, "Hubei"},       {Province::Hunan, "Hunan"},         {Province::InnerMongolia, "Inner Mongolia"},
            {Province::Jiangsu, "Jiangsu"},    {Province::Jiangxi, "Jiangxi"},   {Province::Jilin, "Jilin"},         {Province::Liaoning, "Liaoning"},
            {Province::Ningxia, "Ningxia"},    {Province::Qinghai, "Qinghai"},   {Province::Shaanxi, "Shaanxi"},     {Province::Shandong, "Shandong"},
            {Province::Shanghai, "Shanghai"},  {Province::Shanxi, "Shanxi"},     {Province::Sichuan, "Sichuan"},     {Province::Tianjin, "Tianjin"},
            {Province::Tibet, "Tibet"},        {Province::Xinjiang, "Xinjiang"}, {Province::Yunnan, "Yunnan"},       {Province::Zhejiang, "Zhejiang"},
            {Province::HongKong, "Hong Kong"}, {Province::Macau, "Macau"}};

        auto it = provinceMap.find(province);
        if (it != provinceMap.end()) {
            return it->second;
        } else {
            return "Invalid province";
        }
    }

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

    inline std::string CarrierToString(Carrier carrier) {
        switch (carrier) {
            case Carrier::CUCC:
                return "CUCC";
            case Carrier::CTCC:
                return "CTCC";
            case Carrier::CTCC_v:
                return "CTCC_v";
            case Carrier::CUCC_v:
                return "CUCC_v";
            case Carrier::CMCC_v:
                return "CMCC_v";
            case Carrier::CBCC:
                return "CBCC";
            case Carrier::CBCC_v:
                return "CBCC_v";
            default:
                return "Unknown";
        }
    }

    inline std::string PhoneNumberTypeToString(i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType type) {
        switch (type) {
            case i18n::phonenumbers::PhoneNumberUtil::FIXED_LINE:
                return "FIXED_LINE";
            case i18n::phonenumbers::PhoneNumberUtil::MOBILE:
                return "MOBILE";
            case i18n::phonenumbers::PhoneNumberUtil::FIXED_LINE_OR_MOBILE:
                return "FIXED_LINE_OR_MOBILE";
            case i18n::phonenumbers::PhoneNumberUtil::TOLL_FREE:
                return "TOLL_FREE";
            case i18n::phonenumbers::PhoneNumberUtil::PREMIUM_RATE:
                return "PREMIUM_RATE";
            case i18n::phonenumbers::PhoneNumberUtil::SHARED_COST:
                return "SHARED_COST";
            case i18n::phonenumbers::PhoneNumberUtil::VOIP:
                return "VOIP";
            case i18n::phonenumbers::PhoneNumberUtil::PERSONAL_NUMBER:
                return "PERSONAL_NUMBER";
            case i18n::phonenumbers::PhoneNumberUtil::PAGER:
                return "PAGER";
            case i18n::phonenumbers::PhoneNumberUtil::UAN:
                return "UAN";
            case i18n::phonenumbers::PhoneNumberUtil::VOICEMAIL:
                return "VOICEMAIL";
            case i18n::phonenumbers::PhoneNumberUtil::UNKNOWN:
                return "UNKNOWN";
            default:
                return "INVALID_TYPE";
        }
    }
}  // namespace UserSQLdb