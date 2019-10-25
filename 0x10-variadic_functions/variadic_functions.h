#ifndef VARIAFUNC
#define VARIAFUNC


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <strings.h>
typedef struct args_t
{
	char *format;
	void (*function)(va_list);
} args_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIAFUNC */
