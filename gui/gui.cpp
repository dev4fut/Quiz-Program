#include "library/class.h"
#include "library/Question.h"
#include "library/user.h"
#include "library/subject.h"
#include "library/class.h"
#include <iostream>

using namespace std;

void main_menu()
{
    User user;
    int c;
    cout << "\t\t\t____________________________________________________________________\n\n\n";
    cout << "\t\t\t                         Welcome to Quiz                             \n\n\n";
    cout << "\t\t\t________________________       MENU     ______________________________\n\n\n";
    cout << "                                                                             \n\n";
    cout << "\t| Press 1 to LOGIN |" << endl;
    cout << "\t| Press 2 to SIGNUP |" << endl;
    cout << "\t| Press 3 EXIT. |" << endl;
    cout << "Your Choice: ";
    cin >> c;

    switch(c)
    {
        case 1:
        user.input();
        break;
        case 2:
        user.
    }
}
