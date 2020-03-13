#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: List of types of arguments
 * Return: Void;
 */

/**
 * p_char - Print char
 * @all: valist
 * Return: print char
 */
void p_char(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
 * p_int - Print int
 * @all: valist
 * Return: print int
 */
void p_int(va_list all)
{
	printf("%i", va_arg(all, int));
}
/**
 * p_float - Print float
 * @all: valist
 * Return: print float
 */
void p_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * p_string - Print string
 * @all: valist
 * Return: print string
 */
void p_string(va_list all)
{
	char *s = va_arg(all, char *);
        printf("%s", s);
}

void print_all(const char * const format, ...)
{
	va_list all;
	char *separator = "";
	int i = 0, j;

	fmt_t fmto[] = {{'c', p_char},{'i', p_int},
			{'f', p_float},{'s', p_string}};
	va_start(all, format);
	while (format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == fmto[j].fomto)
			{	printf("%s", separator);
				fmto[j].f(all);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(all);
}
