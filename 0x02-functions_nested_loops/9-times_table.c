#include "holberton.h"

/**
 * times_table - print 9 tables
 * Return: void
 */

void times_table(void)
{
	int j, u, l;

	for (j = 0; j <= 9; j++)
	{
		for (u = 0; u <= 9; u++)
		{
			l = j * u;

			if (l < 10 && u != 0)
			{
				_putchar(' ');
				_putchar(l + 48);
			}
			else if (l >= 10)
			{
				_putchar(l / 10 + 48);
				_putchar(l % 10 + 48);
			}
			else
			{
				_putchar(l + 48);
			}
			if (u != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
