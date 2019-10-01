#include <stdio.h>
/**
 * _strcpy - this function copy a string
(* a blank line
 *@dest: the variable of destination
 *@src: the varaible of source
* Description: this funtion copy a string)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
