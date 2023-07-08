LIBRARY = ./library/fileio.cpp ./library/class.cpp ./library/Question.cpp ./library/subject.cpp ./library/user.cpp 
CONTROLLER = ./controller/classes.cpp ./controller/questions.h ./controller/subjects.cpp ./controller/users.cpp
QUIZ = ./quiz/quiz.cpp
EXERCISE = ./exercise/exercise.cpp
GUI = ./gui/gui.cpp

trial:
	cls
	g++ $(GUI) $(LIBRARY) $(CONTROLLER) main.cpp -o b.o
	./b.o
	del b.o
