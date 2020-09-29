#include <iostream>
#include <string>

#include "sums.h"

double sum(int argc, char **argv)
{
    double total = 0;
    for (int idx = 1; idx < argc; ++idx)
    {
            // convert command-line argument to int
        total += std::stoi(argv[idx]); 
    }
    return total;
}

/*
    this version of sum() parses the command-line arguments as integer
    and sums them.
*/

