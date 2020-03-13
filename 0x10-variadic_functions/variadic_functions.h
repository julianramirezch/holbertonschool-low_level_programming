#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fmt - Struct fmt
 *
 * @fmt: Format
 * @f: The function associated
 */

typedef struct fmt
{
	char *fmt;
	int (*f)(int a, int b);
} fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
