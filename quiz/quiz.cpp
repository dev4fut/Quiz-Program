#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "../library/question.h"
#include "../exercise/counting.h"

/*
    Information Student
    Question
    Answers
    Time
    True False
*/

using namespace std;

void quizStart() {
    int i = 1;
    Question question;

    // starting in 3 2 1
   while (i < 4) {
    system("cls");
    cout << "Starting in " << i++ << endl;
    Sleep(1000);
   }
   
    // clear the screen
    system("cls");
    counting();
    
}


