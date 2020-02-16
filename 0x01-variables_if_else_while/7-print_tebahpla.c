#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0.
 */

int main(void)
{
char j = 122;

while (j <= 122 && j >= 97)
{
	putchar(j);
	j--;
}
putchar('\n');
return (0);
}
