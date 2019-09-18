#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int l = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	 l);
	return (1);
}
