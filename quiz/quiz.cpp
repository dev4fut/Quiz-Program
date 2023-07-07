#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "../library/Question.h"
#include "../exercise/counting.h"
#include "quiz.h"

/*
    Information User
    Question
    Answers
    Time
    True False
*/

using namespace std;

Question question;

void Quiz::start() {
    int count = 3;
    while (count > 0)
    {
        system("cls");
        cout << "\t\t\t\tStarting in " << count;
        Sleep(1000);
        count--;
    }
    counting();
    question.showIndex();
}