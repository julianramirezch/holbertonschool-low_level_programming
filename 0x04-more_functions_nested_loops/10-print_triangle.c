#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - function that prints a triangle
 * @size: Integer
 *Return: 1 or 0
 */

void print_triangle(int size)
	void main (int n)

{
	int j;
	int u;
	n=10;

	if (n > 0)
	{
		for (j = 0 ; j < n ; j++)
		{
			u = 0;
			while (u != j)
			{
				putchar(35);
				u++;
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
