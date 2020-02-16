#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0.
 */

int main(void)
{
char j = 97;
while (j >= 97 && j <= 122)
{
	if ( j != 101 && j != 113)
	{
		putchar(j);
	}
	j++;
}
	putchar('\n');
	return (0);
	}
