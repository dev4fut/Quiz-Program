#include <iostream>
#include "Subject.h"

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
    cout << "Subject's Name: " << endl;
    getline(cin, nameSubject);
    cout << "Subject's Description: " << endl;
    getline(cin, descriptionSubject);
}

void Subject::outputSubject()
{
    cout << "Subject's name: " << nameSubject << endl;
    cout << "Subject's description: " << descriptionSubject << endl;
}

void Subject::updateSubject()
{
    string temp;
    cout << "Subject's name: " << endl;
    cin >> temp;
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