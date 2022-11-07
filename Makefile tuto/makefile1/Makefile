CC = gcc
FLAGS = -Wall -Werror -Wextra

file.o: file.c header.h
by.o: by.c
no.o: no.c
yes.o: yes.c
nice.o: nice.c
hello.o: hello.c
header.h: by.o no.o yes.o nice.o hello.o

%.o : %.c
	@echo "creating $@"
	$(CC) $(FLAGS) -c $<

ar: file.o
	$(CC) $(FLAGS) -o libft.a *.o

clean:
	rm -rf *.o





