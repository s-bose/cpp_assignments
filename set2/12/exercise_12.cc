#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::cout << "? ";              // display the prompt

        std::string line;
        std::getline(std::cin, line);   // get the text line from input stream

        if (line.empty())               // if empty line, end program
            break;

        for                            
        (
            std::string::reverse_iterator reverseIter = line.rbegin();
            reverseIter != line.rend(); 
            ++reverseIter
        )

        {
            std::cout << *reverseIter;
        }
        std::cout << '\n';

        // rbegin() returns a reverse iterator at the last character.
        // reverseIter then iterates over the characters in the line in
        // reverse order by incrementing and accessing the previous character
        // and printing them, until its equal to rend() which signifies an
        // iterator at the position preceeding the first character.

    }
}