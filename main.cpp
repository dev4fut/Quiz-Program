#include <iostream>
#include "library/subject.h"
#include "library/student.h"
#include "library/Question.h"
#include "library/class.h"
#include "exercise/counting.h"

using namespace std;

int main()
{
    int i;
    // Subject subject;
    // subject.inputSubject();
    // subject.outputSubject();
    Classroom classroom;
    counting();
    classroom.outputClass();

    // Student student;
    // student.InputStudent();
    // student.UpdateStudent();

    Question question;
    question.InputQuestion();
    // question.InputAnswer();
    
    // Classroom classroom;
    // classroom.inputClass();
    // classroom.outputClass();

    // quizStart();
    // question.OutputQuestion();
    // cout << "Choose your answer: ";
    // cin >> i;
    return 0;
}
