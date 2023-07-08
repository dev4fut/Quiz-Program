trial:
	cls
	g++ ./library/fileio.cpp ./library/Question.cpp ./controller/questions.cpp ./quiz/quiz.cpp main.cpp -o a.o
	./a.o
	del a.o