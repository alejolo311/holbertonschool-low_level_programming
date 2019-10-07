#include "holberton.h"
/**
 * _strspn - this function find char accept to with the words in the string.
 * @s: this is the string
 * @accept: this is the char accepts to build words
 (* a blank line
* Description: this function find a char)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;
	}
	return (k);
}
