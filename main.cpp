#include <iostream>
#include "library/subject.h"
#include "library/student.h"
#include "library/Question.h"
#include "library/class.h"
#include "exercise/counting.h"

using namespace std;

int main()
{
    Classroom classroom;
    counting();
    classroom.outputClass();

    // Student student;
    // student.InputStudent();
    // student.UpdateStudent();

    // Question question;
    // question.InputQuestion();
    // question.InputAnswer();
    // question.OutputQuestion();
    // Classroom classroom;
    // classroom.inputClass();
    // classroom.outputClass();

    quizStart();
    return 0;
}
