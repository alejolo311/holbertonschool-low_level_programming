#include <stdio.h>
/**
 * main - main block
 * Description: Find fibonacci until 98
 * Return: 0
 */
int main(void)
{
	unsigned long int longest ,fib3 = 0, fib1 = 1, fib4 = 0, fib2 = 2;
	unsigned long int var1, var2, var3;
	int counter;

	longest = 1000000000;

	printf("%lu, %lu, ", fib1, fib2);
	for (counter = 2; counter < 98; counter++)
	{
		if (fib1 + fib2 > longest || fib4 > 0 || fib3 > 0)
		{
			var1 = (fib1 + fib2) / longest;
			var2 = (fib1 + fib2) % longest;
			var3 = fib3 + fib4 + var1;
			fib3 = fib4;
			fib4 = var3;
			fib1 = fib2;
			fib2 = var2;
			printf("%lu%010lu", fib4, fib2);
		}
		else
		{
			var2 = fib1 + fib2;
			fib1 = fib2;
			fib2 = var2;
			printf("%lu", fib2);
		}
		if (counter != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
