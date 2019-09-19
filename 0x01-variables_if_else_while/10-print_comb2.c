#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	j = 48;
	k = 48;

	for (i = 0; i < 100; i++)
	{
		putchar(j);
		putchar(k);
		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
		if (k == 57)
		{
			j++;
			k = 47;
		}
		k++;
	}
	putchar('\n');

	return (0);
}
