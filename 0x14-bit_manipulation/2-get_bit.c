#include "holberton.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: Unsigned long int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;
	unsigned long int size;
	
	bits = n >> index;
	size = sizeof(n) * 8;
	if (index > size)
		return (-1);
	if (bits &  1)
		return (1);
	else
		return (0);
}