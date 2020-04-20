#include "parser.hh"
#include "error_templates.hh"

#include <rapidjson/document.h>
#include <rapidjson/filereadstream.h>
#include <filesystem>
#include <iostream>
#include <fstream>

namespace config
{
    Config_reader::Config_reader(): config_path("config.json")
    {};

    Config_reader::Config_reader(const std::string& config_file_path)
                                : config_path(config_file_path)
    {};

    namespace
    {
        rapidjson::Document read_json_from_file(const std::string& config_path)
        {
            FILE* fp = fopen(config_path.c_str(), "r");
            char readBuffer[std::filesystem::file_size(config_path)];

            rapidjson::FileReadStream input_stream(fp,
                                                readBuffer,
                                                sizeof(readBuffer));

            rapidjson::Document config_json;
            config_json.ParseStream(input_stream);

            fclose(fp);
            return config_json;
        }
    }

    config* Config_reader::parse_config() const
    {
        rapidjson::Document config_json = read_json_from_file(config_path);
        return new config {
                config_json["dest_port"].GetInt(),
                config_json["hostname"].GetString(),
                config_json["threads"].GetInt(),
                config_json["requests_per_minute"].GetInt(),
                config_json["timeout_ms"].GetInt(),
                config_json["timeout_ms_threshold"].GetInt(),
                config_json["log_path"].GetString()
            };
    }
}