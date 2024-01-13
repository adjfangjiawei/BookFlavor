// 封装spdlog,实现类似go的log withfield功能
//
#pragma once

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

#include <stdexcept>
#include <string>
#include <vector>
namespace Util {
    class Log {
      private:
        std::shared_ptr<spdlog::logger> _logger;
        std::vector<std::pair<std::string, std::string>> _fields;  // key, value
        std::vector<std::runtime_error> _runtime_errors;

      public:
        Log(const std::string& logger_name) { _logger = spdlog::stdout_color_mt(logger_name); }
        template <class T>
        auto withField(const std::string& key, const T& value) -> Log& {
            _fields.push_back(std::make_pair(key, std::to_string(value)));
            return *this;
        }
        // const char * 特殊处理
        auto withField(const std::string& key, const char* const& value) -> Log& {
            _fields.push_back(std::make_pair(key, std::string(value)));
            return *this;
        }
        // std::string 特殊处理
        auto withField(const std::string& key, const std::string& value) -> Log& {
            _fields.push_back(std::make_pair(key, value));
            return *this;
        }
        // pair数组
        auto withFields(const std::vector<std::pair<std::string, std::string>>& fields) -> Log& {
            _fields.insert(_fields.end(), fields.begin(), fields.end());
            return *this;
        }

        void info(const std::string& message) { _logger->info(formatMessage(message)); }

        void warn(const std::string& message) { _logger->warn(formatMessage(message)); }

        void error(const std::string& message) { _logger->error(formatMessage(message)); }

        // 这个函数会构造一个包含所有runtime_error的新的log，下次调用info/warn/error时会打印出来
        auto withRuntimeError(const std::runtime_error& err) -> Log& {
            _runtime_errors.push_back(err);
            return *this;
        }

      private:
        std::string formatMessage(const std::string& message) {
            std::string formatted_message = message;
            for (const auto& field : _fields) {
                formatted_message += " [" + field.first + ": " + field.second + "]";
            }
            for (const auto& err : _runtime_errors) {
                formatted_message += " [" + std::string(err.what()) + "]";
            }
            return formatted_message;
        }
    };
}  // namespace Util
