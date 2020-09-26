#include <iostream>
#include <string>

int main(int argc, char **argv)
{
                            // get the radix and number from command line
    size_t radix = atoi(argv[1]);
    size_t number = atoi(argv[2]);
    std::cout << number << ", " << "displyed using radix " << radix << "is : ";

                            // string to store the base converted number
    std::string convertedNumber;

    if (number == 0)        // 0 is 0 in any base
        std::cout << number;

    while (number)
    {                       // repeatedly extract the least significant digit
        size_t digit = number % radix;
        number = number / radix;
        if (digit > 9)      
        {                   // if digit exceeds 9 then convert it to alphabet
                            // append either the digit, or the converted alphabet
                            // to the string
            digit = 'a' + (digit - 10);
            convertedNumber += digit;
        }
        else    
            convertedNumber += std::to_string(digit);
    }
                            // reverse the string so that the last digit goes back
                            // to the last
    std::reverse(convertedNumber.begin(), convertedNumber.end());
    std::cout << convertedNumber;
    std::cout << '\n';
}