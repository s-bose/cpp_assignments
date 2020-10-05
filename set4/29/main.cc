#include "user/user.h"

int main()
{
    User user;
    if (user.valid())
    {
        std::cout << "\n\nuser id: " << user.userId() << "\n"
        << "user name: " << user.name() << "\n"
        << "real name: " << user.realName() << "\n"
        << "group id: " << user.groupId() << "\n"
        << "user directory: " << user.homeDir() << "\n"
        << "user shell: " << user.shell() << "\n"
        << "valid: " << std::boolalpha <<  user.valid() << "\n\n";
        
        return 0;
    }
    std::cout << "Invalid user specified\n";    // user invalid, quit.
    
}