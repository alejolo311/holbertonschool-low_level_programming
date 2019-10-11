#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int result;

	(void) argc;

	if (argv[1] && argv[2])
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
