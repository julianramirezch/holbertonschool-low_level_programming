#include "holberton.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
	int j;
	int u;
	int l;

	for (j = 0 ; j < 10 ; j++)
	{
		for (u = 0 ; u < 10 ; u++)
		{
			l = j * u;

			if (l >= 10)
			{
				putchar(l / 10 + 48);
				putchar(l % 10 + 48);
				if (u != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}

			if (l < 10 && u != 0)
			{
				putchar(' ');
				putchar(l % 10 + 48);
				if (u != 9)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
		putchar ('\n');
	}
}
