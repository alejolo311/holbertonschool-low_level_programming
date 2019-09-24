#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function prints the fibonnaci numbers until 50.
* Return: always return 0
 */
int main(void)
{
	long int i, fib, fib1, fib2, add;

	fib1 = 0;
	fib2 = 1;
	fib = 0;
	add = 0;

	do {
		if (fib2 % 2 == 0)
		{
			add = add + fib2;
		}
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
	} while (fib2 < 4000000);

	printf("%ld\n", add);

	return (0);

}
