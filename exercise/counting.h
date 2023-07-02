#ifndef COUNTING_H
#define COUNTING_H
#include <iostream>
#include <windows.h>

using namespace std;

void counting()
{
    unsigned int mins;
    unsigned int secs;
    do
    {

        cout << "Enter Mins: " << endl;
        cin >> mins;
    } while (mins < 0);
    while (1)
    {
        cout << "\r\t\t\t%2u : %2u" << mins << secs<< endl;
        secs++;
        Sleep(1000); // 1000 =  1 second

        if (secs == 0)
        {
            secs = 59;
            mins++; //
        }
        if (mins == 59 && secs == 59)
        {
            cout << "Timed Out" << endl;
            break;
        }
    }
}

#endif