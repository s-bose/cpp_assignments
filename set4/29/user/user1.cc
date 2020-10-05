#include "user.ih"

User::User()
{
    struct passwd *password; 
    password = getpwuid(getuid());
    // password->pw_gid;
    // password->pw_dir;
    // password->pw_name;
    // password->pw_gecos;
    // password->pw_shell;
    // password->pw_uid;
    // password->
}