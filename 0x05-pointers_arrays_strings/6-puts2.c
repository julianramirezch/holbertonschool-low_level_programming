#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string.
 * @str: Char
 * Return: Always 0.
 */

void puts2(char *str)
{ 
int u;
int l;

for (u = 0 ; *(str + u) != '\0' ; u++)
{
}
for(l = 0 ; l < u ; l += 2)
{
	_putchar(*(str + l));
}
_putchar('\n');
}
