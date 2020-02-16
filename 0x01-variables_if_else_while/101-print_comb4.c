#include <stdio.h>

/**
 * main - void
 * Return: Always 0.
 */


int main(void)
{
int j = 0;
int u, l, i, a;

while (j >= 0 && j <= 999)
{
	u = j / 10;
	l = u / 10;
	i = u % 10;
	a = j % 10;
if ((l != i &&  i != a && l != a) && ((l - i) < 0 && (i - a) < 0))
{
	putchar(l + 48);
	putchar(i + 48);
	putchar(a + 48);
if (j != 789)
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
