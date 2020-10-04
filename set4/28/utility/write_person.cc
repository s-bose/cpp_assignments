#include "utility.ih"

void write_person_data(Person person_arr[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
        person_arr[index].insert(std::cout);
}