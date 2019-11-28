CC=gcc
AR=ar 
MYBANKO= myBank.o
FLAG= -Wall -g

all: libmyBank.a main.o
	$(CC) $(FLAG) -o all main.o ./libmyBank.a
libmyBank.a : myBank.o
	$(CC) -shared -o libmyBank.a myBank.o
myBank.o : myBank.c myBank.h
	$(CC) $(FLAG) -fPIC -c myBank.c
main.o : main.c myBank.h
	$(CC) $(FLAG) -c main.c 

.PHONY: clean all
clean:
	rm -f *.o *.a all