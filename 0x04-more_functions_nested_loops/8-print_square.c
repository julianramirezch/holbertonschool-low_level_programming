#include "holberton.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: Integer
 *Return: 1 or 0
 */

void print_square(int size)

{
int j;
int u;
if (size > 0)
{
	for (j = 0 ; j < size ; j++)
	{
		for (u = 0 ; u < size ; u++)
		{
			_putchar(35);
		}
			_putchar('\n');
	}
}
else
{
		_putchar('\n');
}
}
