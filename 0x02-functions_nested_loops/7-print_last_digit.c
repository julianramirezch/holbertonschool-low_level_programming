#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - prints the las digit of number
 * @n: Integer
 * Return: Always 0.
 */
int print_last_digit(int j)
{
if ( j < 0)
{
	j = j * -1;
	j = j % 10;
	_putchar (j + '0');
	return (j);
}
else
{
	j = j % 10;
	_putchar (j + '0');
	return (j);
}
}
