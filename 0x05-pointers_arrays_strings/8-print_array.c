#include <stdio.h>
/**
 * print_array - this function prints a str only the even lines
(* a blank line
 *@a: this parameter is the arr to ´print
 *@n: the number of elements to print
* Description: this funtion prints a str only the even lines)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			printf("\n");
		else
		{
			printf(", ");
		}
		i++;
	}

}
