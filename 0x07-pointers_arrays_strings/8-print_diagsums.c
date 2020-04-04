#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: number
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int z = 0;
	int sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y == x)
				sum1 += a[z];
			if (y + x + 1 == size)
				sum2 += a[z];
			z++;
		}
	}
        printf("%i, ", sum1);
        printf("%i\n", sum2);
}
