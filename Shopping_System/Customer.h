
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "User.h"

class Customer : public User {
public:
    Customer(const string& uname, const string& pwd) : User(uname, pwd) {}
    void login() override;
};

#endif

