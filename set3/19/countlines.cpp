#include "main.ih"

size_t countLines(std::istream& stream)
{
    size_t count = 0;
    char chr;
    while ((chr = stream.get()) != EOF)
    {
        if (chr == '\n')
            ++count;    // count the newlines
    }
    return count;
}
