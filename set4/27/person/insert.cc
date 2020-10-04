#include "person.ih"

void Person::insert(std::ostream &op_stream)
{
  /*
    inserts a current Person object's information on the
    provided output stream
  */

    op_stream << "\n\nName: " << name() << "\n"
    "Address: " << address() << "\n"
    "Phone: " << phone() << "\n"
    "Mass: " << mass() << " kg.\n\n";
}
