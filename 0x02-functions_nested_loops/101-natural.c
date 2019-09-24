#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function add the multiples of 3 and 5.
* Return: always return 0
 */
int main(void)
{
	int i, result;

	result = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			result = result + i;
		}
	}
		printf("%d\n", result);
		return (0);

}
