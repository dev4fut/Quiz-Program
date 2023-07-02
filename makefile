test:
	cls
	g++ ./library/question.cpp main.cpp -o a.o
	./a.o
	del a.o