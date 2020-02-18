#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - function that prints half o a string.
 * @str: Char.
 * Return: Always 0.
 */

void puts_half(char *str)
{
int j;
int u;

for (j = 0 ; *(str + j) != '\0' ; j++)
{
}
if (j % 2 == 0)
{
	for (u = (j / 2) ; u < j  ; u++)
	{
		_putchar(*(str + u));
	}
}
else
{
	for (u = ((j - 1) / 2) ; u < j ; u++)
	{
		_putchar(*(str + u));
	}
}
_putchar('\n');
}
