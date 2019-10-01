#include "holberton.h"
/**
 * _strlen - this function returns the lenght of a str
(* a blank line
 *@s: this parameter is the str
* Description: this function returns the lenght of a string)?
(* section header: the header of this function is holberton.h)*
* Return: return diferent values depends on the lenght of the string
*/
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}

	return (size);
}
