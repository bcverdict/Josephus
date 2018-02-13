Josephus: main.o
	g++ -std=c++11 -g -Wall main.o -o Josephus

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

clean:
	rm *.o Josephus