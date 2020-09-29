#include <string>

#include "main.ih"
#include "combine.h"

ReturnValues combine(int argc, int argNum, char **argv)
{
        // true if requested argument exists
    bool ok = argv[argNum - 1] ? true : false;  
        // requested argument number
    size_t nr = argNum;     
        // requested arg value if exists, or empty string
    std::string value = ok ? argv[argNum - 1] : "";
    
    ReturnValues ret = { ok, nr, value };
    return ret;        
} 

/*
    checks whether the command line argument requested by `argNum` exists,
    and if so, returns a struct describing the argument as specified above.
*/