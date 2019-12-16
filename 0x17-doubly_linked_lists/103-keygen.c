#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - keygen for user in crackme5
 * @argc: number of args
 * @argv: args in this case the user
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	char key[7] = "      ";
	char *h = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	int len, i, j;

	if (argc > 2 || argc < 2)
		return (-1);
	len = strlen(argv[1]), key[0] = h[(len ^ 59) & 63];
	i = 0, j = 0;
	while (i < len)
	{	j += argv[1][i];
		i++;
	}
	key[1] = h[(j ^ 79) & 63], i = 0, j = 1;
	while (i < len)
	{	j *= argv[1][i];
		i++;
	}
	key[2] = h[(j ^ 85) & 63], i = 0, j = argv[1][0];
	while (i < len)
	{
		if (argv[1][i] > j)
			j = argv[1][i];
		i++;
	}	srand(j ^ 14);
	key[3] = h[rand() & 63], i = 0, j = 0;
	while (i < len)
	{
		j += argv[1][i] * argv[1][i];
		i++;
	}
	key[4] = h[(j ^ 239) & 63];
	i = 0, j = 0;
	while (i < argv[1][0])
	{
		j = rand();
		i++;
	}
	key[5] = h[(j ^ 229) & 63];
	printf("%s", key);
	return (0);
}
