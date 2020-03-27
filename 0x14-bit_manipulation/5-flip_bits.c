#include "holberton.h"

/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: Unsigned long int
 * @m: Unsigned long int
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned long int nbits = 0;

	num = n ^ m;
	while (num)
	{
		if (num & 1)
		nbits++;
		num = num >> 1;
	}
	return (nbits);
}
