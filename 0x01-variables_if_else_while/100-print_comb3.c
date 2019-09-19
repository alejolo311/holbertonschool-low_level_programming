#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i <= 57 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i < 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
