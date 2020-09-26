#include <iostream>

#include "main.ih"

ReturnValues combine(int argNum, char **argv)
{
    bool ok = argv[--argNum] ? true : false;
    size_t nr = argNum;
    std::string value = argv[argNum];
    ReturnValues ret = { ok, nr, value };
    return ret;
} 

bool structCall(int argc, int argNum, char **argv)
{
    ReturnValues ret = combine(argNum, argv);
    if (ret.ok)
        std::cout << 
}

int main(int argc, char **argv)
{
    ReturnValues ret = combine(1, argv);
    std::cout << std::boolalpha << ret.ok << ' ' << ret.nr << ' ' << ret.value << '\n';
}