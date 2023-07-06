#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "counting.h"

using namespace std;

void counting()
{
    unsigned int mins = 9, secs = 59;
    while (1)
    {
        system("cls");
        cout << mins << ":" << secs<< endl;
        secs--;
        Sleep(1000); // 1000 =  1 second

        if (mins > 0 && secs == 0)
        {
            secs = 59;
            mins--; //
        }
        if (mins == 0 && secs == 0)
        {
            system("cls");
            cout << mins << ":0" << endl;
            cout << "Timed Out" << endl;
            break;
        }
    }
}