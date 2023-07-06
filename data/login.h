#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class UserData
{
    public:
        string username;
        string password;

    UserData();
    void SignIn();
    void LogIn();
};

#endif