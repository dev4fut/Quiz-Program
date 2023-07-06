#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <string>

using namespace std;

class Question
{
    public:
    int id = 0;
    string question;
    string answer;

    void init();
    void input();
    void output();
    string toString();
    void update();
    void remove();
};

#endif