#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `printf to print number to 0 to 9
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');

	return (0);
}
