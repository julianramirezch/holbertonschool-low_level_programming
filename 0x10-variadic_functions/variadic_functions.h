#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct fmto - Struct fmt
 * @fomto: Char
 * @f: The function associated
 */

typedef struct fmto
{
	char fomto;
	void (*f)(va_list all);
} fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void p_ch(va_list all);
void p_int(va_list all);
void p_float(va_list all);
void p_string(va_list all);
#endif
