trial:
	cls
	g++ ./gui/gui.cpp main.cpp -o b.o
	./b.o
	del b.o
