test:
	cls
	g++ ./library/class.cpp ./controller/classes.cpp main.cpp -o a.o
	./a.o
	del a.o