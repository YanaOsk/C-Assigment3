all: run

run: myBank.o main.o
	gcc -Wall -fPIC -o run main.o myBank.o

main.o: main.c myBank.h
	gcc -Wall -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -fPIC -c myBank.c	

.PHONY: clean all 

clean:
	rm -f *.o run
