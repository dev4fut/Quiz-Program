#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <iostream>
#include "../library/Question.h"

class Questions {
    public:

    Question dataQuestion[100];
    int n; // vị trí thứ n của dataQuestion[]

    void init();
    void input();
    void output();
    int  find(int id);
    void update(int id);
    void remove(int id);
};

#endif
