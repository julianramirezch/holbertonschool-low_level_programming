#include "holberton.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 time the numbers 0 - 14
 *Return: 1 or 0
 */

void more_numbers(void)
{
int j;
int u;

for (j = 0 ; j <= 9 ; j++)
{
	for (u = 0 ; u <= 14  ; u++)
	{
		if (u >= 10)
			_putchar(u / 10 + '0');
		_putchar(u % 10 + '0');
	}
	_putchar('\n');
}
}
