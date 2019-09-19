#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 00 to 99
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	j = '0';
	k = '0';

	for (i = 0; i <= 90; i++)
	{
		putchar(j);
		putchar(k);

		if (k == '9')
		{
			k = '0';
			j++;
		}
		if (i < 90)
		{
			putchar(44);
			putchar(32);
			k++;
		}
	}
	putchar('\n');

	return (0);
}
