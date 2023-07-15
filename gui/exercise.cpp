#include <iostream>
#include <windows.h>
#include "../controller/questions.h"
#include "exercise.h"

using namespace std;

Exercise::Exercise() {
    this->questions.n;
}

void Exercise::exerciseStart()
{
    int count = 3;
    while (count > 0)
    {
        system("cls");
        cout << "\t\t\t\tStarting in " << count;
        Sleep(1000);
        count--;
    }
}

void Exercise::takeExercise(int numEx)
{  
    
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

void Exercise::exercise() {
    int num;
    cout << "Ban muon lam bao nhiu?: ";
    cin >> num;
    getchar();
    exerciseStart();
    takeExercise(num);
}

void Exercise::quiz() {
    cout << "Ban hay lam bai thi trac nghiem sau day: " << endl;
    getchar();
    exerciseStart();
    takeExercise(50);
}