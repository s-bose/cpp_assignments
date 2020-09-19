#include <iostream>
#include <string>
#include <ctype.h>
#include <math.h>

int main() 
{                       // there are 2^8 = 256 ascii characters
    size_t max = pow(2, 8);
    std::string str;
                        // iterate over all the ascii values
    for (size_t iter = 0; iter < max; ++iter)
    {                   
                        // if its an alphabet, add to the string
        if (isalpha(iter) && isupper(iter)) str += iter;
    }
                        // print the string
    std::cout << str << '\n';
}