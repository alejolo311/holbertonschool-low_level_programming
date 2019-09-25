#include <stdio.h>
/**
 * main - print fibonacci numbers.
 * desc: this program print the fibonacci number until 98
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fib1, fib2, fib3, fib4, fib5, fib6;

	i = 0;
	fib1 = 1, fib2 = 2;
	while (i < 90)
	{
		printf("%lu, %lu, ", fib1, fib2);
		fib1 += fib2;
		fib2 += fib1;
		i += 2;
	}
	printf("%lu, %lu, ", fib1, fib2);
	fib3 = fib1 / 100;
	fib4 = fib2 / 100;
	fib5 = fib1 % 100;
	fib6 = fib2 % 100;
	while (i < 96)
	{
		fib1 = fib3 + fib4;
		fib2 = fib5 + fib6;
		fib2 > 99 ? fib1++ : fib2;
		fib2 = fib2 % 100;
		printf("%lu", fib1);
		printf(fib2 < 10 ? "0" : "");
		printf("%lu", fib2);
		printf(i < 95 ? ", " : "\n");
		fib3 = fib4;
		fib4 = fib1;
		fib5 = fib6;
		fib6 = fib2;
		i++;
	}
	return (0);
}
