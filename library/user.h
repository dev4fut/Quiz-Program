#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User {
    public:
    int id;
    string name;
    string numberUser;
    string grade;
    string username;
    string password;

    User();
    void init();
    void input();
    void ouptut();
    string toString();
    void update();
    void remove();
    void read();
    void SignUp();
    void LogIn();
};

#endif