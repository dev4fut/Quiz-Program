#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "counting.h"

using namespace std;

void counting()
{
    unsigned int mins = 0, secs = 0, limit;
    cout << "Enter Your Time: " << endl;
    cin >> limit;
    while (1)
    {
        system("cls");
        cout << mins << ":" << secs<< endl;
        secs++;
        Sleep(1000); // 1000 =  1 second

        if (secs == 60)
        {
            secs = 0;
            mins++; //
        }
        if (mins == limit)
        {
            cout << "Timed Out" << endl;
            break;
        }
    }
}