#include "utility/utility.h"

#include <iostream>

int main()
{
    size_t n_persons = 5;

    Person person_array[n_persons];

    read_person_data(person_array, n_persons);
    write_person_data(person_array, n_persons);
}
