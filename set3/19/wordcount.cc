#include "wordcount.ih"


size_t countChars(std::istream& stream)
{
    size_t count = 0;
    while (stream.get() != EOF)
        ++count;
    return count;
}

size_t countWords(std::istream& stream)
{
    size_t count = 0;
    char chr;
    while ((chr = stream.get()) != EOF)
    {
        if (isspace(chr))
            ++count;
    }
    return count;
}

size_t countLines(std::istream& stream)
{
    size_t count = 0;
    char chr;
    while ((chr = stream.get()) != EOF)
    {
        if (chr == '\n')
            ++count;
    }
    return count;
}