trial:
	cls
	g++ ./gui/gui.cpp main.cpp -o b.o
	g++ ./library/fileio.cpp ./controller/classes.cpp ./library/class.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
	g++ ./library/fileio.cpp ./quiz/quiz.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
	./b.o
	del b.o
