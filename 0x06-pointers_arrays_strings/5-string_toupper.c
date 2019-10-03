#include "holberton.h"
/**
 * string_toupper - this function up the lowercase
(* a blank line
 *@a: this parameter is the string to converte in uppercase
* Description: this funtion convert lowercase in uppercase)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *string_toupper(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] > 97 && a[j] < 122)
		{
			a[j] = a[j] - 32;
		}

	}
	a[j] = '\0';
	return (a);
}
