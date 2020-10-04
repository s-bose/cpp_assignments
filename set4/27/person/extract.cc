#include "person.ih"

void Person::extract(std::istream &ip_stream)
{
    std::string members_string;

    // read one line from the provided input stream
    // if EOF is encountered, exit
    if (not std::getline(ip_stream, members_string))
        return;

    // create a string stream to hold the line
    std::stringstream str_stream(members_string);

    // an array to hold the extracted data members
    std::string data_members[n_member];

    for (size_t index = 0; index < n_member; ++index)
    {
        // extract the comma separated data members
        std::getline(str_stream, data_members[index], ',');
    }

    // populate the current object's members
    this->setName(data_members[0]);
    this->setAddress(data_members[1]);
    this->setPhone(data_members[2]);
    this->setMass(std::stoul(data_members[3]));

}
