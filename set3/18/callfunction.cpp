#include <iostream>

#include "main.ih"          // ReturnValues struct
#include "callfunction.h"   // structCall(), boundCall() & usage()
#include "combine.h"        // combine()

void usage(char const *programName)
{
    char const options[] =
    R"r(
    [options]           - options
    n                   - number of the requested argument( <= argc )
    args                - additional arguments
    )r";
    std::cout << "Usage: " << programName << " [options]" <<  options << '\n';  
}

bool structCall(int argc, int argNum, char **argv)
{
    if (argNum > argc || argNum < 1)
    {
        std::cout << "Wrong argument number specified\n";
        usage(argv[0]);
        return false;
    }
    else
    {
            // store combine's result in a local struct
        ReturnValues ret = combine(argc, argNum, argv);
        if (ret.ok)
        {
            std::cout << ret.nr << '\t' << ret.value << '\n';
            return true;
        }
        else
        {
            usage(argv[0]);
            return false;
        } 
    }
}

/*
    structCall calls combine(), stores the return value in a local struct,
    and then displays the requested argument number, and its value.
*/

void boundCall(int argc, int argNum, char **argv)
{
    if (argNum > argc || argNum < 1)
    {
        std::cout << "Wrong argument number specified\n";
        usage(argv[0]);
    }
    else
    {
            // no local struct, uses structural binding to get combine's return
        auto [ok, nr, value] = combine(argc, argNum, argv);
        if (ok)
            std::cout << nr << '\t' << value << '\n';
        else
            usage(argv[0]);
    }
}

/*
    boundCall calls combine(), does not define a local struct,
    but displays the requested argument number and its value.
*/