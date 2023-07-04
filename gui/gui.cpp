#include <iostream>
#include <string>
#include <library/class.h>
#include <library/question.h>
#include <library/student.h>
#include <library/subject.h>
#include <gui.h>

using namespace std;
// Registering System

void User::registerDialog()
{
    cout << "Student ID: " << endl;
    cin >> this->id;
    cout << "Passwords: " << endl;
    cin >> this->password;
}

// Just some txt print out

void welcomeMenu()
{
    cout << "\t\t\t\tWelcome To Quiz" << endl;
}

void User::optionsDialog()
{
    cout << "\t\t\tSign in:" << endl;
    cout << "1. Login Account" << endl;
    cout << "2. Register Account" << endl;
    cout << "3. Forgot Password" << endl;
    cout << "4. Exit" << endl;
}

void ExerciseOrTest()
{
    cout << "You're gonna do exercise or test" << endl;
    cout << "1. Exercise" << endl;
    cout << "2. Test" << endl;
    cout << "3. Exit" << endl;
}

// CRUD things

void ClassDialog()
{
    Classroom classroom;
    int dialog;
    cout << "\t\t\t\t\t\tUpdate Class System\n\n\n\n\n"
         << endl;
    cout << "1. Create Info" << endl;
    cout << "2. Read Info" << endl;
    cout << "3. Update Info" << endl;
    cout << "4. Remove Info" << endl;
    cout << "5. Exit" << endl;
    cin >> dialog;
    switch (dialog)
    {
    case 1:
        classroom.inputClass();
        break;
    case 2:
        classroom.outputClass();
        break;
    case 3:
        classroom.updteClass();
        break;
    case 4:
        classroom.removeClass();
        break;
    default:
        break;
    }
}

void StudentDialog()
{
    Student student;
    int dialog;
    cout << "\t\t\t\t\t\tUpdate Student System\n\n\n\n\n" << endl;
    cout << "1. Create Info" << endl;
    cout << "2. Read Info" << endl;
    cout << "3. Update Info" << endl;
    cout << "4. Remove Info" << endl;
    cout << "5. Exit" << endl;
    cin >> dialog;
    switch (dialog)
    {
    case 1:
        student.InputStudent();
        break;
    case 2:
        student.OutputStudent();
        break;
    case 3:
        student.UpdateStudent();
        break;
    case 4:
        student.DeleteStudent();
        break;
    default:
        break;
    }
}

void QuestionDialog()
{

}

void SubjectDialog()
{
    Subject subject;
    int dialog;
    cout << "\t\t\t\t\t\tUpdate Student System\n\n\n\n\n" << endl;
    cout << "1. Create Info" << endl;
    cout << "2. Read Info" << endl;
    cout << "3. Update Info" << endl;
    cout << "4. Remove Info" << endl;
    cout << "5. Exit" << endl;
    cin >> dialog;
    switch (dialog)
    {
    case 1:
        subject.inputSubject();
        break;
    case 2:
        subject.outputSubject();
        break;
    case 3:
        subject.updateSubject();
        break;
    case 4:
        subject.outputSubject();
        subject.deleteSubject();
        break;
    default:
        break;
    }
}