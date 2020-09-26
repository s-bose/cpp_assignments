#include "wordcount.ih"
#include <string>

void usage(char const* programName)
{
    char const usageNotes[] = 
    R"str(
    counts the number of characters, words or lines from
    the standard input

    Usage: ./wc [options]
    Where:
        [options] - optional command-line arguments
        -h        - help, display this message
        -w        - count the number of words
        -c        - count the number of characters
        -l        - count the number of lines
    )str";

    std::cout << usageNotes << '\n';
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "wc: missing arguments\n";
        std::cout << "Type './wc -h' for usage details\n";
        return 0;
    }
    else if (argc > 2)
    {
        std::cout << "Too many arguments\n";
        std::cout << "Type './wc -h' for usage details\n";
    }
    else {
        std::string option = std::string( argv[1] );
        if (!option.compare("-h"))
        {
            usage(argv[0]);
            return 0;
        }
        else if (!option.compare("-w"))
        {
            std::cout << countWords(std::cin) << ' ' << "number of words" << '\n';
            return 0;
        }
        else if (!option.compare("-c"))
        {
            std::cout << countChars(std::cin) << ' ' << "number of characters" << '\n';
            return 0;
        }
        else if (!option.compare("-l"))
        {
            std::cout << countLines(std::cin) << ' ' << "number of lines" << '\n';
            return 0;
        }
        else
        {
            std::cout << "Wrong argument\n";
            std::cout << "Type './wc -h' for usage details\n";
        }
    }
}