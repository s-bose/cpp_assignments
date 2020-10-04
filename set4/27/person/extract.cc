#include "person.ih"

void Person::extract(std::istream &ip_stream)
{
    std::string members_string;
    size_t num_member = 4;

    if (not std::getline(ip_stream, members_string))
        return;

    std::stringstream str_stream(members_string);

    std::string data_members[num_member];
    
    for (size_t index = 0; index < num_member; ++index)
    {
        std::getline(str_stream, data_members[index], ',');
    }
    
    
    this->setName(data_members[0]);
    this->setAddress(data_members[1]);
    this->setPhone(data_members[2]);
    this->setMass(std::stoul(data_members[3]));

}