#include "holberton.h"

/**
 * root - Operations and validations.
 * @n: integer
 * @m: integer
 * Return: Integer.
 */

int root(int n, int m)
{

if (n == 0)
{
	return (1);
}
if (n < 0)
{
	return (-1);
}
if (m * m == n)
{
	return (m);
}
else if (m * m > n)
{
	return (-1);
}
else
{
	return (root(n, m + 1));
}
}

/**
 * _sqrt_recursion - return the root
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
