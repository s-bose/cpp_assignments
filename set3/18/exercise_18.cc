#include <iostream>

#include "main.ih"

ReturnValues combine(int argc, int argNum, char **argv)
{
    bool ok = argv[argNum - 1] ? true : false;
    size_t nr = argNum;
    std::string value = ok ? argv[argNum - 1] : "";
    ReturnValues ret = { ok, nr, value };
    return ret;        
} 

void usage(char const *programName)
{
    char const options[] = 
    R"(

    [options]           - options
    n                   - number of the requested argument( <= argc )
    args                - additional arguments
    )";

    std::cout << "Usage: " << programName << " [options]" <<  options << '\n';  
}

bool structCall(int argc, int argNum, char **argv)
{
    if (argNum > argc)
    {
        std::cout << "Wrong argument number specified\n";
        usage(argv[0]);
        return false;
    }
    else
    {
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

void boundCall(int argc, int argNum, char **argv)
{
    if (argNum > argc)
    {
        std::cout << "Wrong argument number specified\n";
        usage(argv[0]);
    }
    else
    {
        auto [ok, nr, value] = combine(argc, argNum, argv);
        if (ok)
            std::cout << nr << '\t' << value << '\n';
        else
            usage(argv[0]);
    }
}

int main(int argc, char **argv)
{

}