#ifndef STUDENTS_H
#define STUDENTS_H

#include <iostream>
#include "../library/student.h"

class Students {
    public:
    Student dataStudent[100];
    int n; // vị trí thứ n của dataStudent[]

    void init();
    void input();
    void output();
    int find(int id);
    void update(int id);
    void remove(int id);
};

#endif