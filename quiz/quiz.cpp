#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <cmath>
#include "../controller/questions.h"
#include "quiz.h"


/*
    Information User
    Question
    Answers
    Time
    True False
*/

using namespace std;

Questions questions;

void Quiz::start() {
    questions.read();
    int a = 0;
    int pos = 0;
    int count = 3;
    int random;
    int array[questions.n - 1];

    for (int i = 0; i < questions.n; i++)
    {
        array[i] = 100;
    }
    
    
    // while (count > 0)
    // {
    //     system("cls");
    //     cout << "\t\t\t\tStarting in " << count;
    //     Sleep(1000);
    //     count--;
    // }
    // system("cls");
    for (int i = 0; i < questions.n; i++)
    {
        random = rand() % questions.n;
        if (random != array[a])
        {
            /* code */
        }
        
        // system("cls");
        questions.showIndex(random);
        array[a] = random;
        cout << "array " << a << ": " << array[a] << endl;
        a++;
    }
}

// while (pos < questions.n + 1)
//         {
//             int j = 0;
//             random = rand() % questions.n;
//             cout << "random: " << random << endl;
//             while (j < pos + 1)
//             {
//                 cout << "in while 2: " << array[j] << endl;
//                 if (random == array[j])
//                 {
//                     cout << "in if: " << array[j] << endl;
//                     break;
//                 }
//                 else
//                 {
//                     j++;
//                 }
//             }
//             break;
//             pos++;
//         }