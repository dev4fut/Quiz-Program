trial:
	cls
	g++ ./controller/classes.cpp ./library/class.cpp ./library/fileio.cpp main.cpp -o b.o
	./b.o
	del b.o
