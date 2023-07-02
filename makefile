test:
    cls
    g++ library/subject.cpp main.cpp -o a.o
    ./a.o
    del a.o