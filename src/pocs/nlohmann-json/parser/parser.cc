#include "parser.hh"

#include <nlohmann/json.hpp>
#include <filesystem>
#include <iostream>
#include <fstream>

namespace parser
{
    parser::parser(): config_path("config.json")
    {};

    parser::parser(const std::string& config_file_path)
                                : config_path(config_file_path)
    {};


    config::config* parser::parse_config() const
    {
        std::ifstream config_file { config_path };
        nlohmann::json config_json = nlohmann::json::parse(config_file);
        return new config::config {
                config_json["dest_port"],
                config_json["hostname"],
                config_json["threads"],
                config_json["requests_per_minute"],
                config_json["timeout_ms"],
                config_json["timeout_ms_threshold"],
                config_json["log_path"]
            };
    }
}