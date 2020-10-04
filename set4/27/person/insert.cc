#include "person.ih"

void Person::insert(std::ostream &op_stream)
{
    op_stream << "\n\nName: " << name() << "\n"
    "Address: " << address() << "\n"
    "Phone: " << phone() << "\n"
    "Mass: " << mass() << " kg.\n\n";
}