#include <iostream>
#include "subject.h"

using namespace std;

Subject::Subject()
{
    id = 0;
    name = "";
    description = "";
}

void Subject::input()
{
    cout << "'s Name: ";
    getline(cin, name);
    cout << "'s Description: ";
    getline(cin, description);
}

void Subject::output()
{
    cout << "\nSubject's ID: " << id << endl;
    cout << "\nSubject's name: " << name << endl;
    cout << "\nSubject's description: " << description << endl;
}

void Subject::update()
{
    string temp;
    int num;
    cout << "Subject's name: " << endl;
    cin >> num;
    if (temp != "")
        name = temp;
    cout << "Subject's description: ";
    cin >> description;
    if (temp != "")
        description = temp;
}

void Subject::remove()
{
    // remove subject
    this->name = "";
    this->id = 0;
    this->description = "";
}