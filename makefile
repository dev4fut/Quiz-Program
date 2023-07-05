test:
	cls
	g++ ./library/class.cpp ./data/data.cpp main.cpp -o a.o
	./a.o
	del a.o