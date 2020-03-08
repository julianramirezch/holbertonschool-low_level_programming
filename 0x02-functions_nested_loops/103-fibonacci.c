#include "holberton.h"
#include <stdio.h>

/**
 * main- program that finds and prints the sum of the even-valued terms.
 * Return: 0
 */

int main(void)
{
	long int f1 = 0;
	long int f2 = 1;
	long int f3 = 0;
	long int add = 0;

	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		if (f3 < 4000000)
		{
			if (f3 % 2 == 0)
			{
				add = add + f3;
			}
			f1 = f2;
			f2 = f3;
		}
	}
	printf("%ld\n", add);
	return (0);
}
