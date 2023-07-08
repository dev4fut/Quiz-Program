LIBRARY := $(wildcard ./library/*.cpp)
CONTROLLER := $(wildcard ./controller/*.cpp)
GUI := $(wildcard ./gui/*.cpp)

trial:
	@echo "Running..."
	g++ $(LIBRARY) $(CONTROLLER) $(GUI) main.cpp -o a.o
	./a.o
	del a.o
