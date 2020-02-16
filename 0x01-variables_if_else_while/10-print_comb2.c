#include <stdio.h>

/**
 * main - void
 * Return: Always 0.
 */

int main(void)
{
int j = 0;

while (j >= 0 && j < 100)
{
	putchar(j / 10 + 48);
	putchar(j % 10 + 48);
	if (j != 99)
	{
		putchar(44);
		putchar(32);
	}
	j++;
}
putchar('\n');
return (0);
}
