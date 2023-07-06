trial:
	cls
	g++ ./library/fileio.cpp ./controller/classes.cpp ./library/class.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
	./b.o
	del b.o
