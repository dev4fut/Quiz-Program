#include <iostream>
#include "class.h"

using namespace std;

Classroom::Classroom()
{
    ClassName = "";
    ClassID = 0;
}

void Classroom::initClass(string ClassName, int ClassID)
{
    this->ClassName = ClassName;
    this->ClassID = ClassID;
}

void Classroom::inputClass()
{
    cout << "Input Class Name: ";
    getline(cin, this->ClassName);
    cout << "Input Class ID: ";
    cin >> ClassID;
}

void Classroom::outputClass()
{
    cout << "Class Name: " << ClassName << endl;
    cout << "Class ID: " << ClassID << endl;
}

void Classroom::updateClass()
{
    string temp;
    cout << "Class Name: " << endl;
    getline(cin, ClassName);
    if (temp != "")
    {
        Classname = temp;
    }
    cout << "ClassID: " << endl;
    cin >> temp;
    getchar();
    if (temp != "")
    {
        ClassID = temp;
    }
}

void Classroom::removeClass()
{
    delete this;
}