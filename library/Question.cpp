#include <iostream>
#include "question.h"

using namespace std;

void Question::InputQuestion() {
    cout << "ID Question: ";
    cin >> this->id;
    getchar();
    cout << "Input Question " << id << ": ";
    getline(cin, this->question);
    cout << "Input Answer 1: ";
    cin >> this->answer;
    cout << "Input Answer 2: ";
    cin >> this->answer;
    cout << "Input Answer 3: ";
    cin >> this->answer;
    cout << "Input Answer 4: ";
    cin >> this->answer;
}

void Question::OutputQuestion() {
    cout << "Question " << id << ": " << question << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "answer " << i + 1 << ": " << answer[i] << endl;
    }
    
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

void Question::CheckAnswer(int n) {
    if (n == 1)
    {
        answer[0] = true;
        answer[1] = answer[2] = answer[3] = false;
    } else if (n == 2) {
        answer[1] = true;
        answer[2] = answer[3] = answer[0] = false;
    } else if (n == 3) {
        answer[2] = true;
        answer[3] = answer[0] = answer[1] = false;
    } else {
        answer[3] = true;
        answer[0] = answer[1] = answer[2] = false;
    }
}