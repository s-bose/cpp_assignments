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
    for (int i = 0; *environ != nullptr; ++environ, ++i)
        env_array[i] = std::string(*environ);

    quicksort(env_array, 0, length);

    for (int i = 0; i < length; ++i)
        std::cout << env_array[i] << '\n';
}