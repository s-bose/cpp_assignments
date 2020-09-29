#include <iostream>
#include <string>

#include "sums.h"

double sum(char **argv, int argc)
{   
    double total = 0;
    for (int idx = 1; idx < argc; ++idx)
    {
            // convert command-line argument to double
        total += std::stod(argv[idx]); 
    }  
    return total;
}

/*
    by altering the ordering of the function arguments, another overloaded
    version of sum() is created.
    This one parses the command line arguments as double and sums them.
*/
