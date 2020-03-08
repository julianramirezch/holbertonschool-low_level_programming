#include "holberton.h"
#include <stdio.h>

/**
 * main-prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0.
 */

int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long int f3;
	int cont = 0;

	while (cont <= 50)
	{
		if (cont < 50)
		{
			f3 = f1 + f2;
			printf("%ld, ", f3);
		}
		if (cont == 50)
		{
			f3 = f1 + f2;
			printf("%ld\n", f3);
		}
		f1 = f2;
		f2 = f3;
		cont++;
	}
	return (0);
}
