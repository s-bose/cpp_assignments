#include "main.ih"

size_t countWords(std::istream& stream)
{
    size_t count = 0;
    char chr;
    while ((chr = stream.get()) != EOF)
    {
        if (isspace(chr))
            ++count;    // count the whitespaces
    }
    return count;
}