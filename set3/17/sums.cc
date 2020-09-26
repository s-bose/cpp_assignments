#include <iostream>
#include <string>
#include "sums.ih"

double sum(int argc, char **argv)

{
    double total = 0;
    for (int i = 1; i < argc; ++i)
    {
        total += std::string::stoi(argv[i]); 
    }
    return total;
}

double sum(char **argv, int argc)

{
    double total = 0;
    for (int i = 1; i < argc; ++i)
    {
        total += std::string::stod(argv[i]); 
    }  
    return total;
}