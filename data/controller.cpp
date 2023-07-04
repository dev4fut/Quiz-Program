#include <iostream>
#include "controller.h"
#include "../library/class.h"
#include "../library/Question.h"
#include "../library/student.h"
#include "../library/subject.h"

using namespace std;

void inputListClass(Classroom l[])
{
    int i;
    while (1)
    {
        cout << "Do you want to add more class ? (1 Yes || 2 No): ";
        cin >> i;
        if (i == 1 && i > 0 && i < 3)
        {
            classroom.inputClass();
        }
        else if (i == 2 && i > 0 && i < 3)
        {
            break;
        }
    }
}