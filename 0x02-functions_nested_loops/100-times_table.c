#include "holberton.h"

/**
 * prints_times_tables - prints the n times table, starting with 0.
 * @n: integer
 * Return: no
 */

void print_times_table(int n)
{
int u;
int j;

if (n < 15 && n > 0)
{
	for(u = 0 ; u <= n ; u++)
	{ 
		for (j = 0 ; j <= n ; j++)
		{
			_putchar((u * j) + 48 );
			if (j != n)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
			_putchar('\n');
	}
}
}
