#include <iostream>
#include "question.h"

using namespace std;

void Question::init() {
    this->id = 0;
    this->question = "";
    this->answer = "";
}

void Question::input() {
    cout << "ID Question: ";
    cin >> this->id;
    getchar();
    cout << "Input Question " << id << ": ";
    getline(cin, this->question);
    cout << "Input Answer 1: ";
    getline(cin, this->answer);
    cout << "Input Answer 2: ";
    getline(cin, this->answer);
    cout << "Input Answer 3: ";
    getline(cin, this->answer);
    cout << "Input Answer 4: ";
    getline(cin, this->answer);
}

void Question::output() {
    cout << "Question " << id << ": " << question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "answer " << i + 1 << ": " << answer[i] << endl;
    }
    
}

string Question::toString() {

    return "" + to_string(id) + "\t" + question + "\n" + answer + "\n";
}

void Question::update() {
    string temp;
    int num;

    cout << "Update ID (skip press 0): ";
    cin >> num;
    getchar();
    if (num != 0)
    {
        this->id;
    }
    cout << "Update Question: ";
    getline(cin, temp);
    if (temp != "")
    {
        this->question;
    }
    cout << "Update Answer: ";
    getline(cin, temp);
    if (temp != "")
    {
        this->answer;
    }
}

void Question::remove() {
    this->id = 0;
    this->question = "";
}