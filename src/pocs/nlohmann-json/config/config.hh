#if !defined(_SRC_POCS_CONFIG_HH)
#define _SRC_POCS_CONFIG_HH

#include <string>
#include <sstream>

namespace config
{

    struct config
    {
        int dest_port;
        std::string hostname;

        int threads;
        int requests_per_minute;

        int timeout_ms;
        int timeout_ms_threshold;

        std::string log_path;

        std::string toString() {
            std::ostringstream strout;
            strout  << "dest_port: " << dest_port
                    << "\nhostname: " << hostname
                    << "\nthreads: " << threads
                    << "\nrequests_per_minute: " << requests_per_minute
                    << "\ntimeout_ms: " << timeout_ms
                    << "\ntimeout_ms_threshold: " << timeout_ms_threshold
                    << "\nlog_path: " << log_path;
            return strout.str();
        }
    };

}

#endif // _SRC_POCS_CONFIG_HH
