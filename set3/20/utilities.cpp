#include "utilities.h"
#include <iostream>
#include <algorithm>
#include <cctype>

size_t env_length(char **environ)
{
    size_t size = 0;
    while (*(environ++) != nullptr) 
        ++size;
    return size;
}

// calculates the length of the environment variable array
