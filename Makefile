main: main.o Point.o
	g++ -o main main.o Point.o

main.o: main.cpp Point.h
	g++ -c main.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp
