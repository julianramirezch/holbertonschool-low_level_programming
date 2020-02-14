#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle
 * @size: Integer
 *Return: 1 or 0
 */

void print_triangle(int size)

{
int j;
int u;

if (size > 0)
{
	for (j = 0 ; j < size ; j++)
	{
		u = size;
		while (u > j + 1)
		{
			_putchar(32);
			u--;
		}
		while ((u <= (j + 1)) && (u != 0))
		{
			_putchar(35);
			u--;
		}
		while (u == 0)
		{
			_putchar('\n');
			u--;
		}
	}
}
else
{
	_putchar('\n');
}
}
