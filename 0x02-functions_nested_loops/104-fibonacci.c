#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function prints the fibonnaci numbers until 50.
* Return: always return 0
 */
int main(void)
{
	long double  i, fib, fib1, fib2;

	fib1 = 0;
	fib2 = 1;

	for (i = 0; i < 98; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		if (i != 97)
			printf("%0.Lf, ", fib);
		else
			printf("%0.Lf\n", fib);
	}

		return (0);

}
