#include "holberton.h"

/**
 * print_rev - function that prints a string in reverse.
 * @s: Char
 * Return: Always 0.
 */

void print_rev(char *s)
{
int j;
int u;
for (u = 0 ; *(s + u) != '\0' ; u++)
{
}
for (j = u - 1 ; j >= 0 ; j--)
{
	_putchar(*(s + j));
}
_putchar('\n');
}
