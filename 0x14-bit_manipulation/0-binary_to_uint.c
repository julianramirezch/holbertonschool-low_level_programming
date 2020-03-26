#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: String
 * Return: Decimal
 */

unsigned int binary_to_uint(const char *b)
{
	int cont;
	int cont2;
	int base;
	int num = 0;
	int decimal = 0;

	if (b == NULL)
		return (0);

	for (cont = 0; b[cont] ; cont++)
	{
		if (b[cont] != 48 && b[cont] != 49)
			return (0);
	}
	cont--;

	for (cont2 = 0; cont >=  0 ; cont2++)
	{
		base *= 2;
		if (cont2 == 0)
		{
			base = 1;
			decimal = base * (b[cont] - 48);
			cont--;
			continue;
			}
		else
		{
			num = base * (b[cont] - 48);
			decimal += num;
			cont--;
		}
	}
	return (decimal);
}
