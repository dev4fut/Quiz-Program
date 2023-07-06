#include <iostream>
#include <string>
#include "class.h"
#include "fileio.h"

using namespace std;

Classroom::Classroom()
{
    id = 0;
    name = "";
}

Classroom::Classroom(string name, int id)
{
    this->id = id;
    this->name = name;
}

void Classroom::input()
{
    cout << "Input Class ID: ";
    cin >> this->id;
    getchar();
    cout << "Input Class Name: ";
    getline(cin, this->name);
}

void Classroom::output()
{
    cout << " ID: " << id << endl;
    cout << " Name: " << name << endl;
}

string Classroom::toString() {

    return "" + to_string(id) + "\t" + name + "\n";
}

void Classroom::update()
{
    string temp;
    int num;
    cout << "id: " << endl;
    cin >> num;
    getchar();
    if (temp != "")
    {
        id = num;
    }
    cout << "Class Name: " << endl;
    getline(cin, name);
    if (temp != "")
    {
        name = temp;
    }
}

void Classroom::remove()
{
    this->id = 0;
    this->name = "";
}