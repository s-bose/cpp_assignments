#include <iostream>

int main(int argc, char **argv)
{
                // for n command-line arguments (excluding program name)
                // there will be 2^n combinations.
                // 1 left shifted by n produces 2^n
    for (size_t combs = 0; combs < (1 << (argc - 1)); ++combs)
    {
        std::cout << combs + 1 << ": ";

                // loop over the positions of the arguments
                // (excluding program name)
        for (int argPos = 0; argPos < (argc - 1); ++argPos)
        {       
                // mask holds a 1 corresponding to the position of argPos
                // for the 2nd argument (argPos 1), mask is 2 or 0010
            int mask = 1 << argPos;      
                // if mask does not match with combs then the corresponding
                // argument should not be printed, hence skip
            if ((combs & mask) == 0)
                continue;
                // otherwise print the corresponding argument
                // incremented due to skipping the 1st argument
            std::cout << argv[argPos + 1] << ' ';
        }
        std::cout << '\n';
    }
}

/*
    If there are n command-line arguments passed, then there are 2^n combinations possible.
    The first for loop iterates over all of these combinations from 0 to (2^n - 1)
    For each argument's position, from 0 to n - 1, a binary mask is calculated by putting a 1 at
    the argument's position (thus, for 0th argument, the corresponding mask is 001, etc)
    The binary structure of these numbers are then used to match and print the corresponding
    arguments.

    For example, for n = 3, with a.out if then else
    the combinations can be written as 000, 001, 010, 011, 100, ..., etc.
    For each argument position from 0 to 2, the masks are 001, 010 and 100

    These are then bitwise AND-ed with the current combination's value.
    For combination 011 :

    011 & 001 != 0, meaning, it can hold the first argument, => print "if"
    011 & 010 != 0, meaning, it can hold the second argument, => print "then"
    011 & 100 == 0, so the third argument does not exist here, => skip
*/