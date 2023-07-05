#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include "../library/class.h"

class Classes
{
    public:
    Classroom data[50];
    int n;

    Classes();
    void input();
    void output();
    int find(int id);
    void update(int id);
    void remove(int id);
};

#endif