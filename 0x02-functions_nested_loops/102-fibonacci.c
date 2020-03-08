#include "holberton.h"
#include <stdio.h>

/**
 * main-prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0.
 */

int main(void)
{
	long int f1 = 0;
	long int f2 = 1;
	long int f3;
	int cont = 1;

	while (cont <= 50)
	{
		f3 = f1 + f2;
		cont++;
		printf("%ld", f3);
		if (cont <= 50)
			printf(", ");
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
