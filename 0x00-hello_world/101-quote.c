#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	int string_lenght = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n",string_lenght);

	return 1;
}
