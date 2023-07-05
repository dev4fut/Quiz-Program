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
    for (int i = 0; i < 100; i++)
    {
        dataStudent[i].ouptut();
    }
}

int Students::find(int id) {
    int i = 0;
    while (dataStudent[i].id != id)
    {
        i++;
    }
    return i;
}

void Students::update(int id) {
    int i = this->find(id);
    dataStudent[i].update();
}

void Students::remove(int id) {
    int i = this->find(id);
    while (dataStudent[i].id != 0)
    {
        this->dataStudent[i] = this->dataStudent[i+1];
        i++;
    }
}