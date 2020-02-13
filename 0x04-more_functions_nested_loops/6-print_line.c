#include "holberton.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: integer
 *Return: 1 or 0
 */

void print_line(int n)

{
int j;

for (j = 0 ; j < n ; j++)
{
	if (n <= 0)
		_putchar('\n');
	_putchar(95);
}
	_putchar('\n');
}
