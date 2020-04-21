#if !defined(_SRC_POCS_parser_HH)
#define _SRC_POCS_parser_HH

#include <string>
#include "config.hh"

namespace parser
{
    class parser
    {
    public:
        parser();
        parser(const std::string& config_file_path);

        config::config* parse_config() const;

    private:
        std::string config_path;
    };
}
#endif // _SRC_POCS_parser_HH
