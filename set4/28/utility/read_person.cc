#include "utility.ih"

void read_person_data(Person person_arr[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
    {
        std::cout << "? ";
        person_arr[index].extract(std::cin);
    }
}

/*
  reads Person's data from standard input stream for each Person object
  in the array. Calls the extract() method to read the lines and extract
  the data members for the current object.
*/
