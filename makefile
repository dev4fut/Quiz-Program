LIBRARY := $(wildcard ./library/*.cpp)
CONTROLLER := $(wildcard ./controller/*.cpp)
GUI := $(wildcard ./gui/*.cpp)

# $(LIBRARY) $(CONTROLLER) $(GUI)

trial:
	@echo "Running..."
	cls
	gcc $(LIBRARY) $(CONTROLLER) $(GUI) main.cpp -o a.o
	./a.o
	del a.o
