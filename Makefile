#makefile for horse race

CC = g++
CFLAGS = -g -Wall

horserace: main.o Horse.o Race.o
	$(CC) $(CFLAGS) main.o Horse.o Race.o -o horserace

main.o: main.cpp Horse.h Race.h
	$(CC) $(CFLAGS) -c main.cpp

Horse.o: Horse.cpp Horse.h
	$(CC) $(CFLAGS) -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
	$(CC) $(CFLAGS) -c Race.cpp

clean: 
	rm *.o
	rm horserace

run:	horserace
	./horserace
