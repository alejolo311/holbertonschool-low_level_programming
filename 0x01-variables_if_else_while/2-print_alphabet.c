#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet.
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
