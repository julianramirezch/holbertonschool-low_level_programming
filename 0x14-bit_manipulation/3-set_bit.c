#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: Pointer to n
 * @index: index
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned long int size;
	unsigned long int newnum;

	num = *n;
	size = sizeof(n) * 8;

	if (index < size)
	{
		newnum = num | 1 << index;
		*n = newnum;
		return (1);
	}
	else
		return (-1);
}
