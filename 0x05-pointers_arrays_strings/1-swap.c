#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers.
 * @a: Integer.
 * @b: Integer.
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;
	 c = *a;
	*a = *b;
	*b = c;
}
