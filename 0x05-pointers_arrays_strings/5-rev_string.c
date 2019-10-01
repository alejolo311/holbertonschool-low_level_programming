#include "holberton.h"
/**
 * rev_string - this function change a str in rev
(* a blank line
 *@s: this parameter is the str
* Description: this funtion change a str in rev)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void rev_string(char *s)
{
	int temp, size, start;

	start = 0;

	for (size = 0; s[size] != '\0'; size++)
		;
	size--;
	while (start < size)
	{
		temp = s[start];
		s[start] = s[size];
		s[size] = temp;
		start++;
		size--;
	}
}
