#include "holberton.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: Unsigned long int
 * @index: index
 * Return: 1 or 0
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
