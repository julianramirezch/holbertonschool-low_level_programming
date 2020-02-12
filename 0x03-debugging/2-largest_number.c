#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int d;

	if (a > b && b > c)
	{
		d = a;
	}
	else if (b > a && a > c)
	{
		d = b;
	}
	else
	{
		largest = c;
	}

	return (d);
}
