#ifndef USER_H_
#define USER_H_


#include <iostream>
#include <string>



class User
{
    public:
        User();
        bool valid();
        size_t groupId();
        std::string homeDir();
        bool inGroup(size_t gid);
        std::string name();
        std::string realName();
        std::string shell();
        size_t userId();
    
    private:
};

#endif