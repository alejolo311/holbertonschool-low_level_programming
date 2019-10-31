#include <stdio.h>

void __attribute__ ((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
