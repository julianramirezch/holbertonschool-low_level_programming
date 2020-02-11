#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Alphabet in lowercase 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int u = 1;
	char j;

	while (u <= 10)
	{
		for (j = 97 ; j <= 122 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		u++;
	}
}
