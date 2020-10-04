#include "utility.ih"

void read_person_data(Person person_arr[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
    {
        std::cout << "? ";
        person_arr[index].extract(std::cin);
    }
}