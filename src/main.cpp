#include <iostream>
#include "Adder.h"

int main(int argc, char** argv)
{
    std::cout << "Hello injector " << Adder().sum(3, 4) << std::endl;
    return 0;
}
