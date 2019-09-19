#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
