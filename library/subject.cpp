#include <iostream>
#include "subject.h"

using namespace std;

Subject::Subject()
{
    idSubject = 0;
    nameSubject = "";
    descriptionSubject = "";
}

void Subject::initSubject(int idSubject, string nameSubject, string descriptionSubject)
{
    this->nameSubject = nameSubject;
    this->descriptionSubject = descriptionSubject;
    this->idSubject = idSubject;
}

void Subject::inputSubject()
{
    cout << "Subject's Name: ";
    getline(cin, nameSubject);
    cout << "Subject's Description: ";
    getline(cin, descriptionSubject);
}

void Subject::outputSubject()
{
    cout << "\nSubject's ID: " << idSubject << endl;
    cout << "\nSubject's name: " << nameSubject << endl;
    cout << "\nSubject's description: " << descriptionSubject << endl;
}

void Subject::updateSubject()
{
    string temp;
    int num;
    cout << "Subject's name: " << endl;
    cin >> num;
    if (temp != "")
        nameSubject = temp;
    cout << "Subject's description: ";
    cin >> descriptionSubject;
    if (temp != "")
        descriptionSubject = temp;
}

void Subject::deleteSubject()
{
    // remove subject
    delete this;
}