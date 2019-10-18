#include "holberton.h"
/**
 * _strlen  - this functions prints the lenght of a string
(* a blank line
*@s: string to print.
* Description: this function prints the lenght of a string?
(* section header: the header of this function is holberton.h)*
* Return: retunrn the lenght in int
*/
int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
/**
 * _isdigit - this function says if a character is a digit
 * @n: a pointer to a string.
(* a blank line
* Description: this function says if a character is a digit)?
(* section header: the header of this function is holberton.h)*
* Return: return 1 if c is a digit and 0 in other cases.
 */
int _isdigit(char *n)
{
	int i;

	i = 0;
	while (*(n + i) != '\0')
	{
		if (*(n + i) < '0' || *(n + i) > '9')
			return (0);
	}
	return (1);
}

/**
 * main - the entry poiint
(* a blank line
 *@argc:the number of argumentes
 *@argv: the arguments to be multiplicated
* Description: this function multiply two numbers)?
(* section header: the header of this function is holberton.h)*
* Return: return 0 in success.
*/
int main(int argc, char *argv[])
{
	return (0);
}
