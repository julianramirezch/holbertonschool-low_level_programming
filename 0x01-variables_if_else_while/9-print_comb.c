#include <stdio.h>

/**
 * main - void
 * Return: Always 0.
 */

int main(void)
{
char j = 48;

while (j >= 48 && j <= 57)
{
	putchar(j);
	if (j != 57)
	{
	putchar(44);
	putchar(32);
	}
	j++;
}
putchar('\n');
return (0);
}
