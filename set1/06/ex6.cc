#include <iostream>

using namespace std;

int main()
{
  size_t num;
  cout << "Enter a number: ";                                 
  cin >> num;                                                   // taking a number from user input

  cout << (num % 2 ? "odd" : "even") << '\n';
  /*
    check if the remainder after division is 1 or 0
    if remainder is 1 then num is odd, else it is even
  */

  cout << ((num / 2) * 2 == num ? "even": "odd") << '\n';

  /*
    we divide and then multiply the number by 2
    since this is integer division, the result will be rounded
    thus, multiplying it again with 2 will produce 
    same number if num is even, else it is odd
  */

  cout << ((num >> 1) << 1 == num ? "even": "odd") << '\n';

  /*
    right shifting num by once then left shifting once
    then checking if its the same number
    right shifting is equivalent to dividing by 2 and vice versa
    hence we are practically doing the same thing as previously
  */

  cout << (num & 1 ? "odd": "even") << '\n';

  /*
    we bitwise-AND the number with 1
    thus if the last bit of num is 1, the output will be 1
    otherwise 0
  */
}