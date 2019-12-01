CC=gcc
AR=ar 
MYBANKO= myBank.o
FLAG= -Wall -g

all: libmyBank.so main.o
	$(CC) $(FLAG) -o all main.o ./libmyBank.so
libmyBank.so : myBank.o
	$(CC) -shared -o libmyBank.so myBank.o
myBank.o : myBank.c myBank.h
	$(CC) $(FLAG) -fPIC -c myBank.c
main.o : main.c myBank.h
	$(CC) $(FLAG) -c main.c 

.PHONY: clean all
clean:
	rm -f *.o *.so all