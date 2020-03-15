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
	printf("%d", va_arg(all, int));
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

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - function that prints anyhing
 * @format: pointer
 * Return: Void;
 */

void print_all(const char * const format, ...)
{
	fmt_t fmto[] = {
		{'c', p_ch}, {'i', p_int},
		{'f', p_float}, {'s', p_string}
	};
	int i = 0, j = 0;
	char *separator = "";
	va_list all;

	va_start(all, format);
	while (format[i] && format)
	{
		while (j < 4)
		{
			if (format[i] == fmto[j].fomto)
			{	printf("%s", separator);
				fmto[j].f(all);
				separator = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(all);
}
