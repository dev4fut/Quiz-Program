#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "library/student.h"

/*
    Information Student
    Question
    Answers
    Time
    True False
*/

using namespace std;

void quizStart() {

    // starting in 3 2 1
    cout << "Starting in ";
    int n = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << n << "\n";
        Sleep(1000);
        n--;
    }
    // clear the screen
    system("cls");

    
}


