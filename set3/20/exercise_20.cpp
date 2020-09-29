#include <iostream>
#include <string>

#include "quicksort.h"
#include "env_size.h"

extern char **environ;

int main()
{
    size_t length = env_length(environ);

        // convert the environment variables to std::string and store in an array
    std::string env_array[length];
    for (int idx = 0; *environ != nullptr; ++environ, ++idx)
        env_array[idx] = std::string(*environ);

    quicksort(env_array, 0, length);

    for (size_t idx = 0; idx < length; ++idx)
        std::cout << env_array[idx] << '\n';
}

/*
this version of quicksort sorts an array of strings, not a string itself. 

The environment variables are copied to a new array after converting the
c-strings to std::string. Then the quicksort operates on this new array.
*/