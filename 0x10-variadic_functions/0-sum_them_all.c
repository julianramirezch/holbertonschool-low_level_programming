#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: Const unsigned int.
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int cont, sum;

	va_start(ap, n);

	sum = 0;
	for (cont = 0; cont < n ; cont++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
