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

void Question::checkInput() {
    int check;
    for (int i = 0; i < 4; i++)
    {
        this->c[i] = false;
    }
    
    cout << "Which answer is True?: ";
    cin >> check;
    getchar();
    this->c[check - 1] = true;
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

bool Question::check(int ans) {

    if (this->c[ans - 1])
    {
        return true;
    }
    return false;
}

bool Question::showIndex() {
    int ans;
    cout << "Question: " << this->question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Answer " << i + 1 << ": " << this->answer[i] << endl;
    }
    cout << "Your answer: ";
    cin >> ans;
    getchar();
    if (check(ans))
    {
        cout << "You are dung!!!!" << endl;
        return true;
    } 
    cout << "You are not dung!!!!" << endl;
    return false;
}