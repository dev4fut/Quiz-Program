#include <iostream>
#include "controller.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"

using namespace std;

void inputListClass(Classroom l[])
{
    Classroom classroom;
    int i;
    cout << "Do you want to add more class ? (1 Yes || 2 No): ";
    cin >> i;
    do
    {
        if (i == 1)
        {
            classroom.inputClass();
        }
        else if (i == 2)
        {
            break;
        }
    } while (i < 3 && i > 0);
}

void outputListClass(Classroom l[]) {
}