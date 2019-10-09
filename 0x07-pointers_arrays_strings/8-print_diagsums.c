#include "holberton.h"
/**
 * print_diagsums - this function prints a sums of a diag nums in a matrix
 * @a: this is the array
 * @size: this is the size of the diag
 (* a blank line
* Description: this prints a sums of a diag numb in a matrix)?
(* section header: the header of this function is holberton.h)*
* Return: no return
*/
void print_diagsums(int *a, int size)
{
	int i, j, k, l;

	i = 0, j = 0, k = 0, l = 0;
	while (i < (size * size))
	{
		j = *(a + i);
		k = k + j;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		l = l + j;
		i = i + (size - 1);
	}
	printf("%d, %d\n", k, l);
}
