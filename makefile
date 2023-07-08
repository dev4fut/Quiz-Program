LIBRARY = ./library/fileio.cpp ./library/class.cpp ./library/Question.cpp ./library/subject.cpp ./library/user.cpp 
CONTROLLER = ./controller/classes.cpp ./controller/questions.h ./controller/subjects.cpp ./controller/users.cpp
QUIZ = ./quiz/quiz.cpp
EXERCISE = ./exercise/exercise.cpp
GUI = ./gui/gui.cpp

trial:
	cls
<<<<<<< HEAD
	g++ ./library/fileio.cpp ./library/Question.cpp ./controller/questions.cpp ./quiz/quiz.cpp main.cpp -o a.o
	./a.o
	del a.o
=======
	g++ $(GUI) $(LIBRARY) $(CONTROLLER) main.cpp -o b.o
	./b.o
	del b.o
>>>>>>> 04b30f3ed9ada768368e8d129637db41142eb591
