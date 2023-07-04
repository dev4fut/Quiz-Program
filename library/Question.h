#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <iostream>

using namespace std;

class Question
{
    public:
    int id = 0;
    string question;
    string answer;

    void InitQuestion(int id, string question, string answer);
    void InputQuestion();
    void InputAnswer();
    void OutputQuestion();
    void UpdateQuestion();
    void UpdateAnswer();
    void DeleteQuestion();
};

#endif