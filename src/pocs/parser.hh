#if !defined(_SRC_POCS_CONFIG_READER_HH)
#define _SRC_POCS_CONFIG_READER_HH

#include <string>
#include "config.hh"

namespace config
{
    class Config_reader
    {
    public:
        Config_reader();
        Config_reader(const std::string& config_file_path);

        config* parse_config() const;

    private:
        std::string config_path;
    };
}
#endif // _SRC_POCS_CONFIG_READER_HH
