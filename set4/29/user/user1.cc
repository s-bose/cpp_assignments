#include "user.ih"

User::User()
{
    struct passwd *password; 

    // get the current users id via getuid() and get their info from getpwuid()
    password = getpwuid(getuid());
    
    // user info 
    this->d_valid = (password != nullptr);

    if (this->d_valid)  // only proceed if valid
    {
        this->d_user_id = password->pw_uid;     // user id
        this->d_group_id = password->pw_gid;    // group id
        this->d_userdir = password->pw_dir;     // user directory
        this->d_username = password->pw_name;   // user name
        this->d_realname = password->pw_gecos;  // real name
        this->d_shell = password->pw_shell;     // user shell 
    }
}