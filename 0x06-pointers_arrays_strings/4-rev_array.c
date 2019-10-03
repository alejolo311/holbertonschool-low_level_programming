#include "holberton.h"
/**
 * reverse_array - this function reverse an array of strings
(* a blank line
 *@a: this parameter is the array of strings
 *@n: this is the number of the items of the array
* Description: this funtion change a str in rev)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void reverse_array(int *a, int n)
{
	int temp, start;

	start = 0;
	n--;
	while (start < n)
	{
		temp = a[start];
		a[start] = a[n];
		a[n] = temp;
		start++;
		n--;
	}
}
