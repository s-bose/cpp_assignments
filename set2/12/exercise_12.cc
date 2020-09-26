#include <iostream>
#include <string>

int main()
{
    while (true)
    {
        std::cout << "? ";      // display the prompt

        std::string line;
                // get the text line from input stream
                // if empty line or EOF, end program
        if (not std::getline(std::cin, line) or line.empty())
            break;

        for                            
        (       // iterate over the string in reverse
            std::string::reverse_iterator reverseIter = line.rbegin();
            reverseIter != line.rend(); 
            ++reverseIter
        )

        {
            std::cout << *reverseIter;  // print the characters in reverse
        }
        
        std::cout << '\n';
    }
}

/*
    rbegin() returns a reverse iterator at the last character.
    reverseIter then iterates over the characters in the line in
    reverse order by incrementing and accessing the previous character
    and printing them, until its equal to rend() which signifies an
    iterator at the position preceeding the first character.
*/