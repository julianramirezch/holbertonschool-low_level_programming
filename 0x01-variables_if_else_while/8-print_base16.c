#include <stdio.h>

/**
 * main - void
 * Return: Always 0.
 */

int main(void)
{
int j = 0;

while (j >= 0 && j < 16)
{
	j = j % 16;

	if (j < 10)
	{
		putchar(j + 48);
	}
	else
	{
		putchar(j + 87);
	}
	j++;
}
putchar('\n');
return (0);
}
