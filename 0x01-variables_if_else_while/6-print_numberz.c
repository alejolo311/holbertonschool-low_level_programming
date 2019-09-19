#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number 0 to 9.
 * Return: 0
 */
int main(void)
{
	int number = '1';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
