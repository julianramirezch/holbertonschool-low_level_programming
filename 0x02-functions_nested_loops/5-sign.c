#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of number
 * @n: Integer
 * Return: Always 0.
 */
int print_sign(int n)
{
char j = 43;
char u = 45;
char l = 48;

if (n > 0)
{
	_putchar(j);
	return (1);
}
else if (n == 0)
{
	_putchar(l);
	return (0);
}
else
{
	_putchar(u);
	return (-1);
}
_putchar ('\n');
}
