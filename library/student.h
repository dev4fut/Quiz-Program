#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student {
    public:
    int id;
    string name;
    string numberStudent;
    string grade;

    void init();
    void input();
    void ouptut();
    string toString();
    void update();
    void remove();
    void read();
};

#endif