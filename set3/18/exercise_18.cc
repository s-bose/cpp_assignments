#include <iostream>

#include "callfunction.h"   // structCall(), boundCall() & usage()

int main(int argc, char **argv)
{
    if (argc == 1)
    {
            // no argument given
        std::cout << "Argument number not specified\n";
        usage(argv[0]);
    }
    else
    {
            // get the command-line argument number
        size_t arg_index = std::stoi(argv[1]);
        
        structCall(argc, arg_index, argv);
        boundCall(argc, arg_index, argv);
    }
}