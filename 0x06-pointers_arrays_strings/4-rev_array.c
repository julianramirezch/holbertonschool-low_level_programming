#include "holberton.h"

/**
 * reverse_array - Reverses the content of any array
 * @a: Integer
 * @n: Integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
int j;
int u;
int i;

for (i = 0 ; i < n ; i++)
{
}
i--;
for (j = 0 ; j < i ; j++)
{
	u = *(a + i);
	*(a + i) = *(a + j);
	*(a + j) = u;
	i--;
}
}
