#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <iostream>
#include "../library/Question.h"

class Questions {
    public:

    Question data[100];
    int n; // vị trí thứ n của dataQuestion[]
    Questions();

    void input();
    void output();
    string toString();
    int  find(int id);
    void update(int id);
    void remove(int id);
    void write();
    void read();
    bool check();
};

#endif
