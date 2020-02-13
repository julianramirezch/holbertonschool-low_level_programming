#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers from 0 - 9 without 2 and 4.
 *Return: 0
 */

void print_most_numbers(void)

{
int j;

for (j = 48 ; j <= 57 ; j++)
{
	if (j == 50 || j == 52)
	{
		continue;
	}
		_putchar(j);
}
	_putchar('\n');
}
