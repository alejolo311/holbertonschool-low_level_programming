#include <stdio.h>
/**
 * main - entry point
 * Desc: Use `putchar` function to print number from 00 to 99
 * Return: 0
 */
int main(void)
{
	int number_1 = '0';
	int number_2 = '0';


	while (number_1 <= '8')
	{
		putchar(number_1);
		putchar(number_2);
		number_2++;
		if (number_2 == '9')
		{
			number_2 = '0';
			number_1++;
		}
		if (number_2 < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
