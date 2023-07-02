# list file to compile
DATA_FILES = data/data.cpp
GUI_FILES = gui/GUI.cpp
LIBRARY_FILES = library/Student.cpp library/subject.cpp
CLS = cls

run: # run library/Class.cpp
	$(CLS)
	g++ $(LIBRARY_FILES) main.cpp -o library/Student.exe 
	./library/Student.exe
	del library/Student.exe

test: # test library/Class.cpp
	$cls
	g++ $(LIBRARY_FILES) -o library/Class.cpp
	./library/Class.cpp
	del library/Class.cpp