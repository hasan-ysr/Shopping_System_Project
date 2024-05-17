
#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
protected:
    string username;
    string password;

public:
    User(const string& uname, const string& pwd) : username(uname), password(pwd) {}
    virtual void login() = 0;
    virtual ~User() {}

    string getUsername() const { return username; }
    string getPassword() const { return password; }
};

#endif
