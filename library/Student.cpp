#include <iostream>
#include <string>
#include "Student.h"

using namespace std;


void Student::InputStudent() {
    
    cout << "Input Student ID: ";
    cin >> this->id;
    cout << "\nStudent Name: ";
    cin >> this->name;
    cout << "\nStudent Number: ";
    cin >> this->numberStudent;
    cout << "\nStudent grade: ";
    cin >> this->grade;
}

void Student::OutputStudent() {
    cout << "ID: " << id;
    cout << "Name: " << name;
    cout << "Student Number: " << numberStudent;
    cout << "Student grade: " << grade;
}

void Student::UpdateStudent() {
    string temp;
    cout << "ID: ";
    cin >> temp;
    if ( ) {
        this->id;           
    }
    cout << "\nName: ";
    cin >> temp;
    if (temp != "\0") {
        this->name;
    }
    cout << "\nStudent Number: ";
    cin >> temp;
    if (temp != "\0") {
        this->numberStudent;
    }
    cout << "\nStudent grade: " << endl;
    cin >> temp;
    if (temp != "\0") {
        this->grade;
    }
}

void Student::DeleteStudent() {
    
}