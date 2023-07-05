#ifndef SUBJECTS_H
#define SUBJECTS_H

#include <iostream>
#include "../library/subject.h"

class Subjects {
    public:
    Subject dataSubject[10];
    int n; // vị trí thứ n của dataSubject[]

    void init();
    void input();
    void output();
    int find(int id);
    void update(int id);
    void remove(int id);
}

#endif