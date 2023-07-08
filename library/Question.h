#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>
#include <string>

using namespace std;

class Question
{
    public:
    int id;
    string question;
    string answer[4];
    bool c[4];
    Question();

    void input();
    void checkInput();
    void output();
    string arrayToString();
    string toString();
    void update();
    void remove();
    bool check(int ans);
    bool showIndex();
};

#endif