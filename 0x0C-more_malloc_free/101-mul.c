#include "holberton.h"
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
		i++;
	}
	return (1);
}
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
		return (1 + _strlen(s));
	}
	else
		return (0);
}
/**
 * main - the entry point
(* a blank line
*@argc:the number of argumentes
*@argv: the arguments to be multiplicated
* Description: this function multiply two numbers)?
(* section header: the header of this function is holberton.h)*
* Return: return 0 in success.
*/
int main(int argc, char *argv[])
{
	int p, res, len, n1, n2, i, j;
	int *total;

	if (argc < 3 || argc > 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
		puts("Error"), exit(98);
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		printf("0\n");
		return (0);
	}
	n1 = _strlen(argv[1]), n2 = _strlen(argv[2]);
	len = n1 + n2;
	total = calloc(len, sizeof(int *));
	if (total == NULL)
		puts("Error"), exit(98);
	for (i = (n2 - 1); i > -1; i--)
	{
		res = 0;
		for (j = (n1 - 1); j > -1; j--)
		{
			p = (argv[2][i] - '0') * (argv[1][j] - '0');
			res =  (p / 10);
			total[(i + j) + 1] += (p % 10);
			if (total[(i + j) + 1] > 9)
			{
				total[i + j] += total[(i + j) + 1] / 10;
				total[(i + j) + 1] = total[(i + j) + 1] % 10;
			}
			total[(i + j)] += res;
		}
	}
	if (total[0] == 0)
		i = 1;
	else
		i = 0;
	for (; i < len; i++)
		printf("%d", total[i]);
	printf("\n");
	free(total);
	return (0);
}
