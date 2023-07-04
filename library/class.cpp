#include <iostream>
#include "class.h"
#include "../data/data.h"

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
    void writeClassFile();
}

void Classroom::outputClass()
{
    cout << "Class Name: " << ClassName << endl;
    cout << "Class ID: " << ClassID << endl;
}

void Classroom::updateClass()
{
    string temp;
    int num;
    cout << "Class Name: " << endl;
    getline(cin, ClassName);
    if (temp != "")
    {
        ClassName = temp;
    }
    cout << "ClassID: " << endl;
    cin >> num;
    getchar();
    if (temp != "")
    {
        ClassID = num;
    }
}

void Classroom::removeClass()
{
    delete this;
}