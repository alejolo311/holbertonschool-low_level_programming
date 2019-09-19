#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print the alphabet.
 * Return: 0
 */
int main(void)
{
	char i;

	i = 'a';
	while (i  <= 'z')
	{
		putchar(i);
		i++;
	}
	i = 'A';
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
