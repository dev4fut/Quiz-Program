#include <iostream>
#include <string>
#include <conio.h>
#include "Student.h"

using namespace std;

Student student;

void Student::InputStudent() {
    
    cout << "Input Student ID: ";
    cin >> this->id;
    getchar();
    cout << "\nStudent Name: ";
    getline(cin,this->name);
    cout << "\nStudent Number: ";
    getline(cin,this->numberStudent);
    cout << "\nStudent grade: ";
    getline(cin,this->grade);
}

void Student::OutputStudent() {
    cout << "ID: " << id;
    cout << "Name: " << name;
    cout << "Student Number: " << numberStudent;
    cout << "Student grade: " << grade;
}

void Student::UpdateStudent() {
    // tiếp tục nhấn 1
    // ko đổi nhấn 2
    string temp;
    int num;
    cout << "ID (skip press 0): ";
    cin >> num;
    getchar();
    if (num != 0) {
        this->id;
    }
    cout << "\nName: ";
    getline(cin, temp);
    if (temp != "") {
        this->name;
    }
    cout << "\nStudent Number: ";
    getline(cin, temp);
    if (temp != "") {
        this->numberStudent;
    }
    cout << "\nStudent grade: " << endl;
    getline(cin, temp);
    if (temp != "") {
        this->grade;
    }
}

void Student::DeleteStudent() {
    delete this;
}