test:
	cls
	g++ quiz/quiz.cpp -o library/student.cpp -o exercise/counting.cpp main.cpp -o a.o
	./a.o
	del a.o