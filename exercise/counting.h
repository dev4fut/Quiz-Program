#ifndef COUNTING_H
#define COUNTING_H
#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void counting()
{
    unsigned int mins = 0;
    unsigned int secs = 0;
    while (1)
    {
        system("cls");
        cout << mins << ":" << secs<< endl;
        secs++;
        Sleep(50); // 1000 =  1 second

        if (secs == 60)
        {
            secs = 0;
            mins++; //
        }
        if (mins == 60 && secs == 60)
        {
            cout << "Timed Out" << endl;
            break;
        }
    }
}

#endif