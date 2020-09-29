#include <iostream>
#include <string>

#include "sums.h"

double sum(int argc, char **argv)
{
    double total = 0;
    for (int idx = 1; idx < argc; ++idx)
    {
            // convert command-line arg to int
        total += std::stoi(argv[idx]); 
    }
    return total;
}

double sum(char **argv, int argc)
{
    double total = 0;
    for (int idx = 1; idx < argc; ++idx)
    {
            // convert command-line arg to double
        total += std::stod(argv[idx]); 
    }  
    return total;
}