#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @j: integer
 * Return: void
 */
void print_to_98(int j)
{
int u;

if (j > 98)
{
	for (u = j; u >= 98; u--)
	{
		if (u != 98)
		{
			printf("%i, ", u);
		}
	}
									}
else if (j < 98)
{
	for (u = j; u <= 98; u++)
	{
		if (u != 98)
		{
			printf("%i, ", u);
		}
	}
}
printf("98\n");
}
