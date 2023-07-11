#include "users.h"
#include "../library/fileio.h"

using namespace std;

Users::Users()
{
    this->n = 0;
}

bool Users::checkLogin(string username, string password)
{
    for (int i = 0; i < this->n; i++)
    {
        if (username == this->data[i].username && password == this->data[i].password)
        {
            return true;
        }
    }
    return false;
}

void Users::input()
{
    string check;
    do
    {
        data[n].input();
        cout << "Do you want to add more students? (y/n): ";
        getline(cin, check);
        getchar();
        n++;
    } while (check == "y");
}

void Users::output()
{
    for (int i = 0; i < this->n; i++)
    {
        data[i].ouptut();
    }
}

string Users::toString()
{
    string result = "";

    for (int i = 0; i < this->n; i++)
    {
        result = result + this->data[i].toString();
    }

    return result;
}

int Users::find(int id)
{
    int i = 0;
    while (data[i].id != id)
    {
        i++;
    }
    return i;
}

void Users::update(int id)
{
    int i = this->find(id);
    data[i].update();
}

void Users::remove(int id)
{
    int i = this->find(id);
    while (data[i].id != 0)
    {
        this->data[i] = this->data[i + 1];
        i++;
    }
}

void Users::write()
{
    FileIO file;
    file.write("student", this->toString(), this->n);
}

void Users::read()
{
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
        this->data[i].numberUser = dat;
        file.file >> dat;
        this->data[i].grade = dat;
        file.file >> dat;
        this->data[i].username = dat;
        file.file >> dat;
        this->data[i].password = dat;
    }
    cout << dat << endl;
    file.close();
}