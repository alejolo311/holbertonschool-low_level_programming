#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar`
	 function to print the alphabet first in lowcase and then in uppercase.
 * Return: 0
 */
int main(void)
{
	char low_letter = 'a';
	char upp_letter = 'A';

	while (low_letter <= 'z')
	{
		putchar(low_letter);
		low_letter++;
	}
	while (upp_letter <= 'Z')
	{
		putchar(upp_letter);
		upp_letter++;
	}
	putchar('\n');

	return (0);
}
