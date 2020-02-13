#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: 0
 */

int main(void)
{
int j;
for (j = 1 ; j <= 100 ; j++)
{
	if (j != 1)
	{
		printf(" ");
	}
	if (j % 3 == 0)
	{
		printf("Fizz");
	}
	if (j % 5 == 0)
	{
		printf("Buzz");
	}
	if (!(((j % 3) == 0) || ((j % 5) == 0)))
	{
		printf("%d", j);
	}
}
printf("\n");
return (0);
}
