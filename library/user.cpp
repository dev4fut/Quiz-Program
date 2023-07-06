#include <iostream>
#include <string>
#include "user.h"

using namespace std;

void User::init() {
    this->id = 0;
    this->name = "";
    this->numberUser = "";
    this->grade = "";
}

void User::input() {
    
    cout << "Input User ID: ";
    cin >> this->id;
    cout << "\nUser Name: ";
    cin >> this->name;
    cout << "\nUser Number: ";
    cin >> this->numberUser;
    cout << "\nUser grade: ";
    cin >> this->grade;
}

void User::ouptut() {
    cout << "ID: " << id;
    cout << "Name: " << name;
    cout << "User Number: " << numberUser;
    cout << "User grade: " << grade;
}

string User::toString() {

    return "" + to_string(id) + "\t" + name + "\t" + numberUser + "\t" + grade + "\t" + grade + "\n";
}

void User::update() {
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
    cout << "\nUser Number: ";
    cin >> temp;
    if (temp.length() != 0) {
        this->numberUser;
    }
    cout << "\nUser grade: " << endl;
    cin >> temp;
    if (temp.length() != 0) {
        this->grade;
    }
}

void User::remove() {
    this->id = 0;
    this->name = "";
    this->numberUser = "";
    this->grade = "";
}