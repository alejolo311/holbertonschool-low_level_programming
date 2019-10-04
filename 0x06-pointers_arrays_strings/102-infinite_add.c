#include "holberton.h"
/**
 * infinite_add - this functions add two numbers
(* a blank line
 *@n1: first number to add
 *@n2: second number to add
 *@r: this is the buffer where the function store the result
 *@size_r: this is the size of the buffer
* Description: this function adds two numbers)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n, i, j, k, l, m, add, rest, d1, d2;

	l = k = rest =  0;
	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	if (i + 2 > size_r || j + 2 > size_r)
		return (0);
	i--;
	j--;
	while (i >= 0 || j >= 0)
	{
		d1 = 0;
		d2 = 0;
		if (i >= 0)
			d1 = n1[i--] - '0';
		if (j >= 0)
			d2 = n2[j--] - '0';
		add = d1 + d2 + rest;
		if (add > 9)
		{
			rest = 1;
			add = add - 10;
		}
		else
			rest = 0;
		r[k++] = (add + '0');
	}
	if (rest == 1)
		r[k++] = (1 + '0');
	m = k;
	k--;
	for (l = 0; l < k; l++, k--)
	{
		n = r[k];
		r[k] = r[l];
		r[l] = n;
	}
	r[m] = '\0';
	return (r);
}
