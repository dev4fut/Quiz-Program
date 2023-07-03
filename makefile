test:
	cls
	g++ exercise/counting.cpp main.cpp -o a.o
	./a.o
	del a.o