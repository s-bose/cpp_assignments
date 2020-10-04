#include "utility.ih"

void write_person_data(Person person_arr[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
        person_arr[index].insert(std::cout);
}

/*
  writes the Person's data into the standard output stream.
  For each Person object in the array, it calls their corresponding
  insert() method which inserts the current Person's information
  into the standard output.
*/
