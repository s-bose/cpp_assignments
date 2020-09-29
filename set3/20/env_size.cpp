#include "env_size.h"
#include <iostream>
#include <algorithm>
#include <cctype>

size_t env_size(char **environ)
{
    size_t size = 0;
    while (*(environ++) != nullptr) 
        ++size;
    return size;
}

// calculates the size of the environment variable array
