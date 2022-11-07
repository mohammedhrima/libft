#include "header.h"
#include <stdio.h>

int	main(void)
{
	sayhi();
}

/*
//create library
gcc -c *.c 
ar rcs libtest.a *.o
ar -t libtest.a //to see functions
nm libtest.a //to see done functions

//run code
gcc -c run.c
gcc -o run run.o -L. -ltest
*/