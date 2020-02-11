#include "holberton.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @j: Integer
 * Return: Always 0.
 */
int _abs(int j)
{
char u;
if (j < 0)
{
	u = j * (-1);
	_putchar(u);
}
else if (j > 0)
{
	u = j * 1;
	_putchar(u);
}
return (u);
}
