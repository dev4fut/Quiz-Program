#include "questions.h"
#include "../library/fileio.h"

using namespace std;

Questions::Questions() {
    this->n = 0;
}

void Questions::input() {
    string check;
    do
    {
        data[n].input();
        cout << "Do you want to add questions? (y/n): ";
        getline(cin, check);
        n++;
    } while (check == "y");
}

void Questions::output() {
    for (int i = 0; i < this->n; i++)
    {
        data[i].output();
    }
}

string Questions::toString() {
    string result = "";

    for (int i = 0; i < this->n; i++)
    {
        result = result + this->data[i].toString();
    }   

    return result;
}

int Questions::find(int id) {
    int i = 0;
    while (this->data[n].id != id)
    {
        i++;
    }
    return i;
}

void Questions::update(int id) {
    int i = this->find(id);
    data[i].update();
}

void Questions::remove(int id) {
    int i = this->find(id);
    while (data[i].id != 0)
    {
        this->data[i] = this->data[i+1];
        i++;
    }
    n--;
}

void Questions::write() {
    FileIO file;
    file.write("question", this->toString(), this->n);
}

void Questions::read() {
    FileIO file;
    string dat = "";
    file.open("question");
    file.file >> dat;

    this->n = stoi(dat);
    for (int i = 0; i < this->n; i++)
    {
        file.file >> dat;
        this->data[i].id = stoi(dat);
        file.file >> dat;
        this->data[i].question = dat;
        file.file >> dat;
        for (int i = 0; i < 4; i++)
        {
            this->data[i].answer[i] = dat;
        }
        
    }

    cout << dat << endl;
    file.close();
}
