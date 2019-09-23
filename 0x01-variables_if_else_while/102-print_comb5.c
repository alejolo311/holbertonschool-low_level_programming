#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 0001 to 9999
 * Return: 0
 */
int main(void)
{
	int i, j;
	int q, w, e, r;

	for (i = 0; i < 100; i++)
	{
		q = i / 10;
		w = i % 10;

		for (j = 0; j < 100; j++)
		{
			e = j / 10;
			r = j % 10;

			if (q < e || (q == e && w < r))
			{
				putchar(q + '0');
				putchar(w + '0');
				putchar(32);
				putchar(e + '0');
				putchar(r + '0');

				if (!(q == 9 && w == 8))
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
