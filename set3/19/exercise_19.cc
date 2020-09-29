#include <string>

#include "main.ih"

void usage(char const* programName)
{
    std::cout << "Usage: " << programName << " [options]\n";

    char const usageNotes[] = 
    R"str(
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
    if (argc == 1 || argc > 2)
    {
        std::cout << "wc: incorrect arguments\n";
        std::cout << "Type './wc -h' for usage details\n";
        return 0;
    }
    else {
        std::string option = std::string( argv[1] );

        if (!option.compare("-h"))
            usage(argv[0]);
        else if (!option.compare("-w"))
            std::cout << countWords(std::cin) << " number of words\n";
        else if (!option.compare("-c"))
            std::cout << countChars(std::cin) << " number of characters\n";
        else if (!option.compare("-l"))
            std::cout << countLines(std::cin) << " number of lines\n";
        else
        {
            std::cout << "Wrong argument\n";
            std::cout << "Type './wc -h' for usage details\n";
        }
        return 0;
    }
}