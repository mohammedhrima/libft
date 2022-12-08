CC = gcc
FLAGS = -Wall -Werror -Wextra
CFILES = file.c hello.c
OFILES = file.o hello.o

file:%.o
	$(CC) $(FLAGS) -o file  $(OFILES) 

#file.o: file.c header.h
#	$(CC) $(FLAGS) -c file.c

#hello.o: hello.c
#	$(CC) $(FLAGS) -c hello.c 

%.o:%.c
	$(CC) $(FLAGS) -c $^
#                        $@ take all what in the left of : and paste it here
#                        $^ take all what in the right of : and paste it here

clean:
	rm -rf *.o file