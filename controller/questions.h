#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <iostream>
#include "../library/Question.h"

class Questions {
    public:

    Question dataQuestion[100];
    Question dataAnswer[400];
    int id;

    void init();
    void input();
    void output();
    void update();
    void remove();
};

#endif
