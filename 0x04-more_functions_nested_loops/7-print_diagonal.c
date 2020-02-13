#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: Integer
 *Return: 1 or 0
 */

void print_diagonal(int n)

{
int j;
int u;

if (n > 0)
{
for (j = 0 ; j < n ; j++)
{
	u = 0;
	while (u != j)
	{
		_putchar(32);
		u++;
	}
		_putchar(92);
		_putchar('\n');
}
}
else
{
	_putchar('\n');
}
}
