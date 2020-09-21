#include <iostream>
#include <string>

#include <ctype.h>

int main() 
{                                   // there are 2^8 = 256 ascii characters
    size_t max = 1 << 8;            // 1 left shifted by 8 gives 2^8
    std::string str;
                                    // iterate over all the ascii values
    for (size_t iter = 0; iter < max; ++iter)
    {
        if (isalpha(iter))          // if its an alphabet, add to the string
            str += iter;
    }
                            
    std::cout << str << '\n';       // print the string
}