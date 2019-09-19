#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to combinations of numbers
 * Return: 0
 */
int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number < '9')
		{
		putchar(44);
		putchar(32);
		}
		number++;
	}
	return (0);
}
