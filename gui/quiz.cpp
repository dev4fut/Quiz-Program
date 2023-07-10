#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include "../controller/questions.h"
#include "quiz.h"
#include "../controller/score.h"

using namespace std;

Quiz::Quiz() {
    this->questions.read();
}

void Quiz::quizStart() {
    
    int count = 3;
    int random;
    int array[questions.n - 1];

    // for (int i = 0; i < questions.n; i++)
    // {
    //     array[i] = 100;
    // }
    
    
    while (count > 0)
    {
        system("cls");
        cout << "\t\t\t\tStarting in " << count;
        Sleep(1000);
        count--;
    }
    system("cls");
}

void Quiz::takeQuiz(int numEx) {
    for (int i = 0; i < numEx; i++)
    {
        if (questions.showIndex(rand() % questions.n))
        {
            score.countTrue();
        }
    }
    system("cls");
    cout << "===============================" << endl;
    cout << "======= Your score is " << score.calcScore() << " ======" << "\n";
    cout << "===============================" << endl;
}

void Quiz::quiz() {
    int num;
    cout << "Ban muon lam bao nhiu?: ";
    cin >> num;
    getchar();
    quizStart();
    takeQuiz(num);
}