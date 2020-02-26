#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string.
 * *s: Character.
 * Return: void.
 */

void _puts_recursion(char *s)
{
_putchar(*s);
if (*s != '\0')
	_puts_recursion(s + 1);
if (*s == '\0')
	_putchar ('\n');
}
