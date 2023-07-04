#include <iostream>
#include "Question.h"

using namespace std;

void Question::InitQuestion(int id, string question, string answer) {
    id = 0;
    question = " ";
    answer = " ";
}

void Question::InputQuestion() {
    cout << "ID Question: ";
    cin >> this->id;
    getchar();
    cout << "Input Question: ";
    getline(cin, this->question);
}

void Question::InputAnswer() {
    cout << "Input Answer: ";
    getline(cin, this->answer);
    getchar();
}

void Question::OutputQuestion() {
    cout << "Question " << id << ": " << question;
    cout << answer << endl;
}

void Question::UpdateQuestion() {
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
}

void Question::UpdateAnswer() {
    string temp;
    cout << "Update Answer: ";
    getline(cin, temp);
    if (temp != "")
    {
        this->answer;
    }
}

void Question::DeleteQuestion() {
    delete this;
}