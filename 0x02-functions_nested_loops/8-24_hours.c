#include "holberton.h"
#include <stdio.h>
/**
 * jack_bauer - Prints every minute of the day of jack bauer , 00:00 - 23:59
 * @j: Integer
 * Return: Always 0.
 */
void jack_bauer(void)
{
int j;
int u;

for ( j = 0 ; j <= 23 ; j++)
{
	for ( u = 0 ; u <= 59 ; u++ )
	{ 
		_putchar (j/10 + 48);
                _putchar (j%10 + 48);
		_putchar (58);
		_putchar (u/10 +48);
		_putchar (u%10 +48);
		_putchar ('\n');
	}
}
}
