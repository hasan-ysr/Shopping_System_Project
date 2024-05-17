
#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

class Admin : public User {
public:
    Admin(const string& uname, const string& pwd) : User(uname, pwd) {}
    void login() override;
};

#endif

