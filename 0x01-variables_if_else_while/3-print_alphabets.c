#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet.
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char upp_letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upp_letter <= 'Z')
	{
		putchar(upp_letter);
		upp_letter++
	}
	putchar('\n');
	return (0);
}
