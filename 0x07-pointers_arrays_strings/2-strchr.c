#include "holberton.h"
/**
 * _strchr - this function find a charecter ina string
 * @s: this is the string
 * @c: this is the cchar to found
 (* a blank line
* Description: this function find a char)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while(*(s + i) != c && *(s + i) != '\0')
		i++;
	return (s + i);
}
