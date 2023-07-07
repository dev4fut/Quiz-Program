trial:
	cls
	g++ ./library/fileio.cpp ./quiz/quiz.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
	./b.o
	del b.o
