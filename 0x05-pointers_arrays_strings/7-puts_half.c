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
for (u = (j / 2) ; u < j  ; u++)
{
	_putchar(*(str + u));
}
_putchar('\n');
}
