#include "variadic_functions.h"

/**
 * print_strings - functio that prints strings
 * @separator: String to be printed
 * @n: Number of strings passed to the function
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int cont;
	char *c;
	int cont2;
	va_list ap;

	va_start(ap, n);
	for (cont = 0; cont < n ; cont++)
	{
		if (!separator)
		{
			c = va_arg(ap,  char *);
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);
		}
		if (separator)
		{
			c = va_arg(ap, char*);
			if (c == NULL)
				printf("(nil)");
			else
				printf("%s", c);
			if (cont < n - 1)
			{
				for (cont2 = 0; separator[cont2] ; cont2++)
				{
					printf("%c", separator[cont2]);
				}
			}
		}
	}
	printf("\n");
	va_end(ap);
}

