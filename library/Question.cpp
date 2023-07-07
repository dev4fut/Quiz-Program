#include <iostream>
#include "Question.h"

using namespace std;

Question::Question()
{
    this->id = 0;
    this->question = "";
    for (int i = 0; i < 4; i++)
    {
        this->answer[i] = "";
    }
}

void Question::input()
{
    cout << "ID Question: ";
    cin >> this->id;
    getchar();
    cout << "Input Question: ";
    cout << question;
    getline(cin, this->question);
    cout << "Input Answer 1: ";
    getline(cin, this->answer[0]);
    cout << "Input Answer 2: ";
    getline(cin, this->answer[1]);
    cout << "Input Answer 3: ";
    getline(cin, this->answer[2]);
    cout << "Input Answer 4: ";
    getline(cin, this->answer[3]);
}

void Question::check() {
    int check;
    for (int i = 0; i < 4; i++)
    {
        this->c[i] = false;
    }
    
    cout << "Which answer is True?: ";
    cin >> check;
    getchar();
    if (check == 1)
    {
        this->c[0] = true;
    } else if (check == 2)
    {
        this->c[1] = true;
    } else if (check == 3)
    {
        this->c[2] = true;
    } else {    this->c[3] = true;    }
    for (int i = 0; i < 4; i++)
    {
        cout << c[i] << "\t";
    }
    
}

void Question::output()
{
    cout << "Question " << id << ": " << question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "answer " << i + 1 << ": " << answer[i] << endl;
    }
}

string Question::arrayToString()
{
    string result = "";
    
    for (int i = 0; i < 4; i++)
    {
        result = result + this->answer[i] + "\t" + to_string(this->c[i]) + "\n";
    }
    return result;
}

string Question::toString()
{

    return "" + to_string(id) + "\n" + this->question + "\n" + arrayToString() + "\n";
}

void Question::update()
{
    string temp;
    int num;

    cout << "Update ID (skip press 0): ";
    cin >> num;
    getchar();
    if (num != 0)
    {
        this->id = num;
    }
    cout << "Update Question: ";
    getline(cin, temp);
    if (temp != "")
    {
        this->question = temp;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Update Answer " << i + 1 << ": ";
        getline(cin, temp);
        if (temp != "")
        {
            this->answer[i] = temp;
            temp = "";
        }
    }
}

void Question::remove()
{
    this->id = 0;
    this->question = "";
}