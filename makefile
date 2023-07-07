trial:
	cls
<<<<<<< HEAD
<<<<<<< HEAD
	g++ ./gui/gui.cpp main.cpp -o b.o
=======
	g++ ./library/fileio.cpp ./controller/classes.cpp ./library/class.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
>>>>>>> ram-1-khe
=======
	g++ ./library/fileio.cpp ./quiz/quiz.cpp ./controller/questions.cpp ./library/Question.cpp main.cpp -o b.o
>>>>>>> ram-1-khe
	./b.o
	del b.o
