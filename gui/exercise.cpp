#include <iostream>
#include <windows.h>
#include "../controller/questions.h"
#include "../controller/score.h"
#include "exercise.h"

using namespace std;


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

    }
}
