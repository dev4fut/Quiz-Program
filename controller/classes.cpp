#include <iostream>
#include "classes.h"

using namespace std;

Classes::Classes() {
    this->n = 0;
}

void Classes::input() {
    string check;
    do
    {
        data[n].input();
        n++;    
        cout << "Do you want to add more class ? (y/n): ";
        cin >> check;
    } while (check == "y" && n < 50);
}

void Classes::output() {
    cout << "tao dang co: " << n << endl;
    for (int i = 0; i < this->n; i++)
    {
        data[i].output();
    }
}

int Classes::find(int id) {
    int i = 0;    

    while (this->data[i].id != id)
    {
        i++;
    }
    
    return i;
}

void Classes::update(int id) {
    int i = this->find(id);
    data[i].update();
}

void Classes::remove(int id) {
    int i = this->find(id);
    while (this->data[i].id != 0)
    {
        this->data[i] = this->data[i+1];
        i++;
    }
    this->n--;   
}