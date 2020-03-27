#include "holberton.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: Unsigned long int
 */

void print_binary(unsigned long int n)
{
	unsigned long int base = 0;
	unsigned long int cont = 0, cont2, bin = 0;

	if (n == 0)
	{	
		_putchar(48);
		return;
	}
	while (base < n)
	{
		if (cont == 0)
			base = 1;
		else
			base *= 2;
		if (base > n)
			break;
		cont++;
	}

	for (cont2 = 0; cont > 0; cont2++)
	{
		cont--;
		bin = n >> cont;
		if (bin & 1)
			_putchar(49);
		else
			_putchar(48);
	}
}
