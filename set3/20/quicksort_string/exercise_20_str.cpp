#include <iostream>
#include <string>

#include "quicksort_str.h"

extern char **environ;

int main()
{
    while (*environ)
    {
            // get the env variables as std::string
        std::string env_var = *environ;
        quicksort(env_var, 0, env_var.size());
        std::cout << env_var << '\n';
        environ++;
    }
}

/*
    The exercise description was not immediately clear as in whether to
    sort the characters of a string, or to sort an array of strings 
    chronologically. 

    Therefore this alternative version of quicksort is presented that
    sorts an individual string alphabetically.
    
    Each environment variable is copied to an std::string instance and
    then quicksort is applied to this string to produce the sorted string.
*/