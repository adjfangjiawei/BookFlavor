CREATE TABLE user_register (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255),
    password VARCHAR(255),
    phone_number VARCHAR(255),
    province ENUM('Anhui', 'Beijing', 'Chongqing', 'Fujian', 'Gansu', 'Guangdong', 'Guangxi', 'Guizhou', 'Hainan', 'Hebei', 'Heilongjiang', 'Henan', 'Hubei', 'Hunan', 'Inner Mongolia', 'Jiangsu', 'Jiangxi', 'Jilin', 'Liaoning', 'Ningxia', 'Qinghai', 'Shaanxi', 'Shandong', 'Shanghai', 'Shanxi', 'Sichuan', 'Tianjin', 'Tibet', 'Xinjiang', 'Yunnan', 'Zhejiang', 'Hong Kong', 'Macau'), 
    region_code VARCHAR(255),
    phonenumber_type ENUM('FIXED_LINE', 'MOBILE', 'FIXED_LINE_OR_MOBILE', 'TOLL_FREE', 'PREMIUM_RATE', 'SHARED_COST', 'VOIP', 'PERSONAL_NUMBER', 'PAGER', 'UAN', 'VOICEMAIL', 'UNKNOWN'),
    zip INT,
    city VARCHAR(10), 
    carrier ENUM('CUCC', 'CTCC', 'CTCC_v', 'CUCC_v', 'CMCC_v', 'CBCC', 'CBCC_v'),
    area_code INT
);

CREATE INDEX idx_province ON user_register(province);
CREATE INDEX idx_region_code ON user_register(region_code);
CREATE INDEX idx_phonenumber_type ON user_register(phonenumber_type);
CREATE INDEX idx_zip ON user_register(zip);
CREATE INDEX idx_carrier ON user_register(carrier);
CREATE INDEX idx_city ON user_register(city);