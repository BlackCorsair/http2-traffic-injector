#include <iostream>

#include "parser.hh"

int main(void)
{
    parser::parser reader {};
    config::config* my_config = reader.parse_config();
    std::cout << my_config->toString() << std::endl;

    delete my_config;
    return 0;
}