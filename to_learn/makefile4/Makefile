$(CC) = gcc

#SRC = (wildcard *.c)


libtest.a: hi.o hello.o by.o
	ar rcs libtest.a *.o

%.o: %.c header.h
	@echo "creating $@"
	$(CC) -c $< 

clean:
	rm -rf *.o libtest.a