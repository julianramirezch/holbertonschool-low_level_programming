#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers.
 * @a: Integer.
 * @n: Integer.
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int j;
int u;
for (u = 0 ; u < n ; u++)
{
	j = *(a + u);
	printf("%i", j);
	if (u < (n - 1))
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
}
