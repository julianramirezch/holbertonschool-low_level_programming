#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * @separator: String to be printed
 * @n: Number of integers.
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int cont;
	int cont2;
	int c;

	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return;
	for (cont = 0; cont < n ; cont++)
	{
		if (!separator)
		{
			c = va_arg(ap, int);
			printf("%i", c);
		}
		if (separator)
		{
			c = va_arg(ap, int);
			printf("%i", c);
			if (cont < n - 1)
			{
				for (cont2 = 0 ; separator[cont2] ; cont2++)
					printf("%c", separator[cont2]);
			}
		}
	}
	printf("\n");
	va_end(ap);
}
