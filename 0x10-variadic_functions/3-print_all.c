#include "variadic_functions.h"
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(arguments[j]).format)
			{
				arguments[j].function(args);
				if (*(format + i + 1))
					printf(", ");

			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
