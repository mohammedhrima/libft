CC = gcc
FLAGS = -Wall -Werror -Wextra

all: file

hi.o: hi.c header.h
	$(CC) $(FLAGS) -c $<

hello.o: hello.c header.h
	$(CC) $(FLAGS) -c $<

by.o: by.c header.h
	$(CC) $(FLAGS) -c $<

file: file.c hi.o hello.o by.o
	$(CC) $(FLAGS) -o $@ $^

file.a: by.c hello.c hi.c
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm *.o file