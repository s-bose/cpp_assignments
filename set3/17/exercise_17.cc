#include <iostream>
#include <string>
#include "sums.ih"


int main(int argc, char **argv) 
{   
    bool doubl_ = false;
    for (int i = 1; i < argc; ++i)
    {
        if ((std::string( argv[i] ).find('.')) != std::string::npos)
        {
            doubl_ = true;
            break;
        }
    }
    std::cout << (doubl_ ? sum(argv, argc) : sum(argc, argv)) << '\n';
    return 0;
}