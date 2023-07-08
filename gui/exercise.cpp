#include <iostream>
#include <windows.h>
#include "../controller/questions.h"
#include "exercise.h"

using namespace std;

Exercise::Exercise() {
    this->questions.read();
}

void Exercise::exerciseStart()
{
    int num;
    int count = 3;
    cout << "Ban muon lam bao nhiu?: ";
    cin >> num;
    getchar();
    while (count > 0)
    {
        system("cls");
        cout << "\t\t\t\tStarting in " << count;
        Sleep(1000);
        count--;
    }
    this->takeExercise(num);
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