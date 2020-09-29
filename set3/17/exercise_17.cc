#include <iostream>
#include <string>

#include "sums.h"


int main(int argc, char **argv) 
{   
        // flag to check if any command-line argument is double
    bool has_double = false;
    
    for (int idx = 1; idx < argc; ++idx)
    {
        // check if any argument contains a dot
        if ((std::string( argv[idx] ).find('.')) != std::string::npos)
        {
            has_double = true;
            break;
        }
    }
    std::cout << (has_double ? sum(argv, argc) : sum(argc, argv)) << '\n';
}