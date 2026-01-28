all: main

main: main.o Point.o Forme.o cercle.o carree.o rectangle.o
	g++ -Wall -Wextra -o main main.o Point.o Forme.o cercle.o carree.o rectangle.o

main.o: main.cpp Point.h Forme.h
	g++ -Wall -Wextra -c main.cpp

Point.o: Point.cpp Point.h
	g++ -Wall -Wextra -c Point.cpp

Forme.o: Forme.cpp Forme.h
	g++ -Wall -Wextra -c Forme.cpp

cercle.o: Formes/cercle.cpp Formes/cercle.h Forme.h
	g++ -Wall -Wextra -c Formes/cercle.cpp

carree.o: Formes/carree.cpp Formes/carree.h Forme.h
	g++ -Wall -Wextra -c Formes/carree.cpp

rectangle.o: Formes/rectangle.cpp Formes/rectangle.h Forme.h
	g++ -Wall -Wextra -c Formes/rectangle.cpp

clean:
	rm -f *.o main

run: main
	./main


