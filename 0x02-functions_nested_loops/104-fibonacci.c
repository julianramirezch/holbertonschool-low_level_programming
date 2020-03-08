#include "holberton.h"
#include <stdio.h>

/**
 * main-  program that finds and prints the first 98 Fibonacci numbers.
 * Return: 0.
 */

int main(void)
{
	unsigned long int f1 = 0;
	unsigned long int f2 = 1;
	unsigned long int f3;
	int cont = 1;

	while (cont <= 98)
	{
		f3 = f1 + f2;
		cont++;
		printf("%lu", f3);
		if (cont <= 98)
			printf(", ");
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
	return (0);
}
