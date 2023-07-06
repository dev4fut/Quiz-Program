#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include "../library/student.h"

class Students {
    public:
    Student data[100];
    int n; // vị trí thứ n của dataStudent[]

    void init();
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