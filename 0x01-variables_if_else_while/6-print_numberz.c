#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0.
 */

int main(void)
{
int j = 0;
while (j >= 0 && j <= 9)
{
	putchar(j + 48);
	j++;
}
putchar('\n');
return (0);
}
