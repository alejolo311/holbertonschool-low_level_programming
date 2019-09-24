#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function prints the fibonnaci numbers until 50.
* Return: always return 0
 */
int main(void)
{
	long int i, fib, fib1, fib2;

	fib1 = 0;
	fib2 = 1;

	for (i = 0; i < 49; i++)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		if (i != 48)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
	}

		return (0);

}
