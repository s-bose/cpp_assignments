#include <iostream>
#include <string>

#include "quicksort.h"
#include "utilities.h"

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