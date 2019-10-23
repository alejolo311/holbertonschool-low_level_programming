#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated.
(* a blank line
* Description: this program is the enttry point for a calculator)?
(* section header: 3-calc.h)*
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	char *ope;
	char op;
	int a, b, answer;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2][0];
	if ((op != '*' && op != '+' && op != '-'
	     && op != '/'  && op != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ope = argv[2];
	p = get_op_func(ope);
	result = (*p)(n1, n2);

	printf("%d\n", result);
	return (0);
}
