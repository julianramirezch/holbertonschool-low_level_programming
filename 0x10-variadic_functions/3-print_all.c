#include "variadic_functions.h"

/**
 * p_ch - Print character.
 * @all: valist
 * Return: void
 */
void p_ch(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
 * p_int - Print int
 * @all: valist
 * Return: void
 */
void p_int(va_list all)
{
	printf("%i", va_arg(all, int));
}
/**
 * p_float - Print float
 * @all: valist
 * Return: void
 */
void p_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
 * p_string - Print string
 * @all: valist
 * Return: void
 */
void p_string(va_list all)
{
	char *s = va_arg(all, char *);

	printf("%s", s);
}

/**
 * print_all - function that prints anyhing
 * @format: pointer
 * Return: Void;
 */

void print_all(const char * const format, ...)
{
	va_list all;
	char *separator = "";
	int i = 0, j;

	fmt_t fmto[] = {{'c', p_ch}, {'i', p_int},
			{'f', p_float}, {'s', p_string}};
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
