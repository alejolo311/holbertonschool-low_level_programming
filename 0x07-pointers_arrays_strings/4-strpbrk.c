#include "holberton.h"
/**
 * _strpbrk - this function search a bytes in a string
 * @s: this is the string
 * @accept: this is the c accept to star print
 (* a blank line
* Description: this function find a char)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				k = 1;
		}
		if (k == 1)
			return (s + i);
	}
	return (0);
}
