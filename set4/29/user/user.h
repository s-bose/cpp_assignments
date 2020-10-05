#ifndef USER_H_
#define USER_H_


#include <iostream>
#include <string>
#include <sys/types.h>



class User
{
    bool                d_valid;
    uid_t               d_user_id;
    uid_t               d_group_id;
    std::string         d_userdir;
    std::string         d_username;
    std::string         d_realname;
    std::string         d_shell;

    public:
        User();
        inline bool valid() const
        {  
            return d_valid;
        }
        inline size_t groupId() const
        {
            return d_group_id;
        }
        inline std::string homeDir() const
        {
            return d_userdir;
        }
        inline std::string name() const
        {
            return d_username;
        }
        inline std::string realName() const
        {
            return d_realname;
        }
        inline std::string shell() const
        {
            return d_shell;
        }
        inline size_t userId() const
        {
            return d_user_id;
        }

        inline bool inGroup(size_t gid) const
        {
            return d_group_id == gid;
        }

};

#endif