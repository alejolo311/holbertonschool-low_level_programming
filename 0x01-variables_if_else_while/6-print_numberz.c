#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet.
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
