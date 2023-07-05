#include <iostream>
#include "subjects.h"

using namespace std;

void Subjects::init() {
    this->n = 0;
}

void Subjects::input() {
    string check;
    do
    {
        dataSubject[n].input();
        cout << "Do you want to add more subjects? (y/n): ";
        getline(cin, check);
        n++;
    } while (check == "y");
}

void Subjects::output() {
    for (int i = 0; i < this->n; i++)
    {
        dataSubject[i].output();
    }
}

int Subjects::find(int id) {
    int i = 0;
    while (dataSubject[i].id != id) {
        i++;
    }
    return i;
}

void Subjects::update(int id) {
    int i = find(id);
    dataSubject[i].update();
}

void Subjects::remove(int id) {
    int i = find(id);
    while (dataSubject[i].id != 0) {
        this->dataSubject[i] = this->dataSubject[i+1];
    }
}