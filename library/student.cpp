#include <iostream>
#include <string>
#include "student.h"

using namespace std;

void Student::init() {
    this->id = 0;
    this->name = "";
    this->numberStudent = "";
    this->grade = "";
}

void Student::input() {
    
    cout << "Input Student ID: ";
    cin >> this->id;
    cout << "\nStudent Name: ";
    cin >> this->name;
    cout << "\nStudent Number: ";
    cin >> this->numberStudent;
    cout << "\nStudent grade: ";
    cin >> this->grade;
}

void Student::ouptut() {
    cout << "ID: " << id;
    cout << "Name: " << name;
    cout << "Student Number: " << numberStudent;
    cout << "Student grade: " << grade;
}

string Student::toString() {

    return "" + to_string(id) + "\t" + name + "\t" + numberStudent + "\t" + grade + "\t" + grade + "\n";
}

void Student::update() {
    string temp;
    cout << "ID: ";
    cin >> temp;
    if (temp.length() != 0) {
        this->id;           
    }
    cout << "\nName: ";
    cin >> temp;
    if (temp.length() != 0) {
        this->name;
    }
    cout << "\nStudent Number: ";
    cin >> temp;
    if (temp.length() != 0) {
        this->numberStudent;
    }
    cout << "\nStudent grade: " << endl;
    cin >> temp;
    if (temp.length() != 0) {
        this->grade;
    }
}

void Student::remove() {
    this->id = 0;
    this->name = "";
    this->numberStudent = "";
    this->grade = "";
}