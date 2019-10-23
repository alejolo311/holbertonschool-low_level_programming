#include "3-calc.h"
int main(int argc, char *argv[])
{
	char* ope;
	char op;
	int a, b, answer;
	int (*ptr)(int, int);

	if (argc != 4)
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
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ope = argv[2];
	ptr = get_op_func(ope);
	answer = (*ptr)(a, b);
	printf("%d\n", answer);
	return (0);
}
