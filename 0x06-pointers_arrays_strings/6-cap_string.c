#include "holberton.h"
/**
 * isaspace - checks if a character is one the requires
(* a blank line
 *@a: this parameter is the char to check
 * Description: this funtion compare if a char is one of the store chars)?
* Return: this return 0 in false and 1 in true
 */

int isaspace(char a)
{
	int i;
	char spaces[] = ",;.!?(){}\n\t\" ";

	for (i = 0; spaces[i] != '\0'; i++)
	{
		if (a == spaces[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - this function capitalize letters
(* a blank line
 *@a: this parameter is the string to converte in uppercase
* Description: this funtion convert lowercase in uppercase)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *cap_string(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if (isaspace(a[j -1]))
		{
			if (a[j] > 96 && a[j] < 123)
			{
				a[j] -= 32;
			}
			else if (a[j] > 64 && a[j] < 91)
			{
				a[j] = a[j];
			}
			else if (a[j] > 47 && a[j] < 58)
			{
				a[j] = a[j];
			}
		}
	}
	return (a);
}
