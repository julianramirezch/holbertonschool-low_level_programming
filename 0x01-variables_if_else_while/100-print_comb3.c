#include <stdio.h>

/**
 * main - void
 * Return: Always 0.
 */

int main(void)
{
int j = 0;
int u;
int l;
while (j >= 0 && j < 100)
{
	u = j / 10;
	l = j % 10;
	if ((u != l) && (u - l) < 0)
	{
		putchar(j / 10 + 48);
		putchar(j % 10 + 48);
	if (j != 89)
	{
		putchar(44);
		putchar(32);
	}
	}
	j++;
}
putchar('\n');
return (0);
}
