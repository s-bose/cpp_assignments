#include <iostream>

using namespace std;

namespace
{
  struct masks                                    // a struct that holds the specified bit-sequence
  {
    size_t a: 1;                                  // the first bit from the lower order is held in 'a'
    size_t b: 3;     
    size_t c: 4;
    size_t d: 5;
    size_t e: 4;
    size_t f: 4;
    size_t g: 4;
    size_t h: 4;
    size_t i: 4;
    size_t j: 5;
    size_t k: 2;                                  // the remaining bits are not set
  };               

  union largeNumber                               // a union that will be used to store our "value"
    {
      size_t value;                               // the value field of type "size_t" is stored 
      
      struct masks m = {0, 7, 15, 10, 6, 7, 15, 15, 7, 0, 3};
      /* 
        setting the bit-fields of "m" using declaration initialization

        now that "value" and "mask" occupy the same memory
        we can put values for the different bit-fields in "m"
        which would then be reflected upon "value"

        The bit fields start from the lower order bits 
        "a" being the bit-field of the lowest order 1 bit
        and then gradually upwards.
        thus the bit sequence's most significant
        2 bits are given by the value of k = 3

      */  
    };
};

int main()                  
{                                     
  largeNumber num;                   
  cout << hex << num.value << endl;   // outputing the value of "value" as hexadecimal
  /*

    outputs "c0ffeecafe" 

    which makes the first 2 bits = 1 1 
    then the next 5 most significant bits are all set to 0 by j = 0
    thus, our "value" so far is 1 1 0 0 0 0 0 ...

    Then the next 5 bits are set to 7 because i = 7
    thus, "value" = 1 1 0 0 0 0 0 0 1 1 1 ...

    The next 4 bits hold 15 since h = 15
    thus, "value" = 1 1 0 0 0 0 0 1 1 1 1 1 1 1 ...

    Now if we translate this to hexadecimal, we have 1 1 0 0 | 0 0 0 0 | 1 1 1 1
    which correspond to "c 0 f" 

  */
} 
                                    
