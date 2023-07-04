test:
	cls
	g++ ./library/class.cpp main.cpp -o a.o
	./a.o
	del a.o