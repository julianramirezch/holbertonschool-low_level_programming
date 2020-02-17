#include "holberton.h"

/**
 * _puts - function that prints a string.
 * @str: Char
 * Return: Always 0.
 */

void _puts(char *str)
{
int j;

	for (j = 0 ; *(str + j) != '\0' ; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
