#include"3-calc.h"
/**
 * get_op_func - get the operator and redirect to the func.
 * @s: the operator
(* a blank line
* Description: get the operator and redirect to the func.)?
(* section header: 3-calc.h)*
* Return: return null or the function to do.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == *(ops[i]).op)
		{
			return (*(ops[i]).f);
		}
	}
	return (NULL);
}
