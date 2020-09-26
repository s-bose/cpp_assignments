#include <iostream>

int main()
{
    size_t first, second, rest;

    while (std::cin >> first >> second)
    {
        long double productLarge;

        std::cout << "Numbers: " << first << ", " << second << '\n';

                // compute (a * b)
        long long unsigned product = first * second;
                // if (a * b) / b != a then product has overflowed
        if ((product / first) != second)
                // double the size and store the product
            productLarge = static_cast<long double>(product);
        else
            productLarge = product;
            
                // repeat until the remainder is zero
        while ((rest = first % second) != 0)
        {                       
                // assign second to first, rest to second
            first = second;
            second = rest;
        }

                // second = gcd(a, b), lcm = (a * b) / second
        std::cout << "GCD: " << second << " LCM: " << productLarge / second << '\n';
    }
}

/*
    The overflow handling is done by first calculating the product of a and b and storing
    it in a long long unsigned variable. If overflow occurs, the product will be less than
    the actual value of (a * b) and hence (a * b) / b != a, after that check, the product
    is then casted to another long double variable which is double the width of `ull`

    This part was done in reference to the conversation with Jurjen wrt the mail
    with subject "Help regarding exercise 13" from Shiladitya Bose.
*/