#include "holberton.h"
#include <stdio.h>

/**
 * main - compute the sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0.
 */

int main(void)
{
	int cont1 = 0;
	int add;

	while (cont1 < 1024)
	{
		if (cont1 % 3 == 0 || cont1 % 5 == 0)
		{
			add = add + cont1;
		}
		cont1++;
	}
	printf("%i\n", add);
	return (0);
}
