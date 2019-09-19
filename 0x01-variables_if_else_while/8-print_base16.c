#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the numbers in base 16.
 * Return: 0
 */
int main(void)
{
	int number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
