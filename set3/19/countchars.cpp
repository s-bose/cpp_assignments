#include "main.ih"

size_t countChars(std::istream& stream)
{
    size_t count = 0;
    while (stream.get() != EOF)
        ++count;
    return count;
}
