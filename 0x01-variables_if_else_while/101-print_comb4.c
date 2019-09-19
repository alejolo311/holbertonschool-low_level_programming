#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (k = 48 ; k <= 57 ; k++)
	{
		for (i = 48 ; i <= 57 ; i++)
		{
			if (k < i)
			{
				for (j = 48 ; j <= 57 ; j++)
				{
					if (i < j)
					{
					putchar(k);
					putchar(i);
					putchar(j);
					if (k < 55)
					{
					putchar(44);
					putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
