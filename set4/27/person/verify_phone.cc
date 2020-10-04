#include "person.ih"

bool Person::verifyPhone(std::string const &phone)
{
    for (char character: phone)
    {
        if (!::isdigit(character))      // check if all characters are digits
            return false;
    }
    return true;
}