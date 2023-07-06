#include "students.h"
#include "fileio.h"

using namespace std;

void Students::init() {
    this->n = 0;
}

void Students::input() {
    string check;
    do
    {
        data[n].input();
        cout << "Do you want to add more students? (y/n): ";
        getline(cin, check);
        n++;
    } while (check == "y");
}

void Students::output() {
    for (int i = 0; i < 100; i++)
    {
        data[i].ouptut();
    }
}

string Students::toString() {
    string result = "";

    for (int i = 0; i < this->n; i++)
    {
        result = result + this->data[i].toString();
    }
    
    return result;
}

int Students::find(int id) {
    int i = 0;
    while (data[i].id != id)
    {
        i++;
    }
    return i;
}

void Students::update(int id) {
    int i = this->find(id);
    data[i].update();
}

void Students::remove(int id) {
    int i = this->find(id);
    while (data[i].id != 0)
    {
        this->data[i] = this->data[i+1];
        i++;
    }
}

void Students::write() {
    FileIO file;
    file.write("student", this->toString(), this->n);
}

void Students::read() {
    FileIO file;
    string dat = "";
    file.open("student");

    this->n = stoi(dat);
    for (int i = 0; i < this->n; i++)
    {
        file.file >> dat;
        this->data[i].id = stoi(dat);
        file.file >> dat;
        this->data[i].name = dat;
        file.file >> dat;
        this->data[i].numberStudent = dat;
        file.file >> dat;
        this->data[i].grade = dat;
    }
    cout << dat << endl;
    file.close();
}