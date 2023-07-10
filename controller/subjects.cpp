#include "subjects.h"
#include "../library/fileio.h"

using namespace std;

Subjects::Subjects() {
    this->n = 0;
}

void Subjects::input() {
    string check;
    do
    {
        data[n].input();
        cout << "Do you want to add more subjects? (y/n): ";
        getline(cin, check);
        n++;
    } while (check == "y");
}

void Subjects::output() {
    for (int i = 0; i < this->n; i++)
    {
        data[i].output();
    }
}

string Subjects::toString() {
    string result = "";

    for (int i = 0; i < this->n; i++)
    {
        result = result + this->data[i].toString();
    }
    return result;
}

int Subjects::find(int id) {
    int i = 0;
    while (data[i].id != id) {
        i++;
    }
    return i;
}

void Subjects::update(int id) {
    int i = find(id);
    data[i].update();
}

void Subjects::remove(int id) {
    int i = find(id);
    while (data[i].id != 0) {
        this->data[i] = this->data[i+1];
    }
}

void Subjects::write() {
    FileIO file;
    file.write("subject", this->toString(), this->n);
}

void Subjects::read() {
    FileIO file;
    string dat = "0";

    this->n = stoi(dat);
    for (int i = 0; i < this->n; i++)
    {
        file.file >> dat;
        this->data[i].id = stoi(dat);
        file.file >> dat;
        this->data[i].name = dat;
        file.file >> dat;
        this->data[i].description = dat;
    }
    cout << dat << endl;
    file.close();
}