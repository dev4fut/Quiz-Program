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

<<<<<<< HEAD
void Quiz::start() {
    questions.read();
    int a = 0;
    int pos = 0;
=======
void Quiz::quizStart() {
    
>>>>>>> origin/ram-2-khe
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
<<<<<<< HEAD
//     for (int i = 0; i < questions.n; i++)
//     {
//         random = rand() % questions.n;
//         if (random != array[a])
//         {
//             /* code */
//         }
        
//         // system("cls");
//         questions.showIndex(random);
//         array[a] = random;
//         cout << "array " << a << ": " << array[a] << endl;
//         a++;
//     }
// }

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
=======
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
>>>>>>> origin/ram-2-khe
}