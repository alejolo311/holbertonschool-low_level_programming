#include "holberton.h"
/**
 * _strstr - this function found the bytes of a string in other string
 * @haystack: this is the array contains the all string
 * @needle: this containes the bytes to found
 (* a blank line
* Description: this found the bytes of a string in other)?
(* section header: the header of this function is holberton.h)*
* Return: return a char;
*/
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j == *haystack && *j != '\0' && *haystack != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
			return (i);
		haystack = i + 1;
	}
	return (0);
}
