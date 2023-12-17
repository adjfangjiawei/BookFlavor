drop TABLE user_register;

CREATE TABLE user_register (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(30),
    password VARCHAR(30),
    phonenumber_code VARCHAR(20),
    phonenumber_province ENUM('Anhui', 'Beijing', 'Chongqing', 'Fujian', 'Gansu', 'Guangdong', 'Guangxi', 'Guizhou', 'Hainan', 'Hebei', 'Heilongjiang', 'Henan', 'Hubei', 'Hunan', 'Inner Mongolia', 'Jiangsu', 'Jiangxi', 'Jilin', 'Liaoning', 'Ningxia', 'Qinghai', 'Shaanxi', 'Shandong', 'Shanghai', 'Shanxi', 'Sichuan', 'Tianjin', 'Tibet', 'Xinjiang', 'Yunnan', 'Zhejiang', 'Hong Kong', 'Macau'), 
    phonenumber_region_code VARCHAR(10),
    phonenumber_type ENUM('FIXED_LINE', 'MOBILE', 'FIXED_LINE_OR_MOBILE', 'TOLL_FREE', 'PREMIUM_RATE', 'SHARED_COST', 'VOIP', 'PERSONAL_NUMBER', 'PAGER', 'UAN', 'VOICEMAIL', 'UNKNOWN'),
    phonenumber_zip INT,
    phonenumber_city VARCHAR(10), 
    phonenumber_carrier ENUM('CUCC', 'CTCC', 'CTCC_v', 'CUCC_v', 'CMCC_v', 'CBCC', 'CBCC_v'),
    phonenumber_area_code INT
);

CREATE INDEX idx_name ON user_register(name);
CREATE INDEX idx_phonenumber_code ON user_register(phonenumber_code);
CREATE INDEX idx_province ON user_register(phonenumber_province);
CREATE INDEX idx_region_code ON user_register(phonenumber_region_code);
CREATE INDEX idx_phonenumber_type ON user_register(phonenumber_type);
CREATE INDEX idx_phonenumber_zip ON user_register(phonenumber_zip);
CREATE INDEX idx_phonenumber_carrier ON user_register(phonenumber_carrier);
CREATE INDEX idx_phonenumber_city ON user_register(phonenumber_city);
CREATE INDEX idx_phonenumber_area_code ON user_register(phonenumber_area_code);
