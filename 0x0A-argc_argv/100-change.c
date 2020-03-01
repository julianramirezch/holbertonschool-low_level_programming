#include <stdio.h>
#include <stdlib.h>

/**
 * main- Program that prints the minimun number of coins to make change.
 * @argc: Integer
 * @argv: Character
 * Return: 1
 */

int main(int argc, char *argv[])
{

int change, coins;
change = atoi(argv[1]);
coins = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
if (change < 0)
	printf("0\n");
else
{
	while (change > 0)
	{
		if (change >= 25)
			change = change - 25;
		else if (change >= 10)
			change = change - 10;
		else if (change >= 5)
			change = change - 5;
		else if (change >= 2)
			change = change - 2;
		else
			change = change - 1;
		coins += 1;
	}
	printf("%i\n", coins);
}
return (0);
}
