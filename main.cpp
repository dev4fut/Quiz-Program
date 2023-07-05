#include <iostream>
#include "library/subject.h"
#include "library/student.h"
#include "library/Question.h"
#include "exercise/counting.h"
<<<<<<< HEAD
#include "./controller/classes.h"
=======
#include "data/login.h"
>>>>>>> 2a6e8df815b8f02104246d8d6d35e0d40870019c

using namespace std;

int main()
{
<<<<<<< HEAD
    int i;
    // Subject subject;
    // subject.inputSubject();
    // subject.outputSubject();

    // Classroom classroom;
    // counting();
    // classroom.inputClass();
    // classroom.outputClass();

    // Student student;
    // student.InputStudent();
    // student.UpdateStudent();

    // Question question;
    // question.InputQuestion();
    // question.InputAnswer();
    
    // Classroom classroom;
    // classroom.inputClass();
    // classroom.outputClass();

    // quizStart();
    // question.OutputQuestion();
    // cout << "Choose your answer: ";
    // cin >> i;

    Classes classes;
    classes.input();
    classes.output();
    classes.update();
    system("pause");
    classes.remove();
=======
    UserData user;
    user.LogIn();
>>>>>>> 2a6e8df815b8f02104246d8d6d35e0d40870019c
    return 0;
}
