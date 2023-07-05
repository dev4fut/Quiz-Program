#include <iostream>
#include "students.h"

using namespace std;

void Students::init() {
    this->n = 0;
}

void Students::input() {
    string check;
    do
    {
        dataStudent[n].input();
        cout << "Do you want to add more students? (y/n): ";
        getline(cin, check);
        n++;
    } while (check == "y");
}

void Students::output() {
    
}