#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet - Alphabet in lowercase
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char j;

	for (j = 97 ; j <= 122 ; j++)
	{
		_putchar(j);

	}

	_putchar('\n');
}
