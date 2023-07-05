#include <iostream>
#include "questions.h"
#include "classes.h"

using namespace std;

void Questions::init() {
    this->n = 0;
}

void Questions::input() {
    string temp;
    do
    {
        dataQuestion[n].input();
        cout << "Do you want to add questions? (y/n): ";
        getline(cin, temp);
        n++;
    } while (temp != "y");
}

void Questions::output() {
    for (int i = 0; i < 100; i++)
    {
        dataQuestion[i].output();
    }
}

int Questions::find(int id) {
    int i = 0;
    while (this->dataQuestion[n].id != id)
    {
        i++;
    }
    return i;
}

void Questions::update(int id) {
    int i = this->find(id);
    dataQuestion[i].update();
}

void Questions::remove(int id) {
    int i = this->find(id);
    while (dataQuestion[i].id != 0)
    {
        this->dataQuestion[i] = this->dataQuestion[i+1];
        i++;
    }
    n--;
}