#ifndef USERS_H
#define USERS_H

#include <iostream>
#include "users.h"
#include "../library/user.h"

class Users {
    public:
    User data[100];
    int n; // vị trí thứ n của dataUser[]
    Users();

    void input();
    void output();
    string toString();
    int find(int id);
    void update(int id);
    void remove(int id);
    void write();
    void read();
};

#endif