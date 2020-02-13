#include "holberton.h"
#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: 0
 */

int main(void)
{
int j;
for (j = 0 ; j <= 100 ; j++)
{
	if ((j % 3) == 0)
	{
		printf("Fizz ");
	}
	else if ((j % 5) == 0)
	{
		printf("Buzz ");
	}
	else if (((j % 3) == 0) && ((j % 5) == 0))
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%d ", j);
	}
}
	return (0);
}
