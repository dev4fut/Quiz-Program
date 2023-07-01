#include <iostream>
#include "Student.h"

using namespace std;


void Student::InputStudent() {
    
    cout << "Input Student ID: " << endl;
    cin >> this->id;
    cout << "Student Name: " << endl;
    cin >> this->name;
    cout << "Student Number: " << endl;
    cin >> this->numberStudent;
    cout << "Student grade: " << endl;
    cin >> this->grade;
}

void Student::OutputStudent() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Student Number: " << numberStudent << endl;
    cout << "Student grade: " << grade << endl;
}

void Student::UpdateStudent() {
    string temp;
    cout << "ID: " <<endl;
    cin >> temp;
    if (temp != " ") {
        this->id;           
    }
    cout << "Name: " <<endl;
    cin >> temp;
    if (temp != " ") {
        this->name;
    }
    cout << "Student Number: " << endl;
    cin >> temp;
    if (temp != " ") {
        this->numberStudent;
    }
    cout << "Student grade: " << endl;
    cin >> temp;
    if (temp != " ") {
        this->grade;
    }
}

void Student::DeleteStudent() {
    
}