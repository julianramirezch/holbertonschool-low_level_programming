#include "holberton.h"

/**
 * primenumber - Prime Number
 * @n: Integer
 * @j: Integer
 * Return: Integer.
 */

int primenumber(int n, int j)
{
	if (n <= 1)
		return (0);
	else if (n == j)
		return (1);
	else if (n % j == 0)
		return (0);
	else
		return (primenumber(n, j + 1));
}

/**
 * is_prime_number - Returns 1 if the input is prime number.
 * @n: Integer
 * Return: Integer
 */

int is_prime_number(int n)
{
	return (primenumber(n, 2));
}
