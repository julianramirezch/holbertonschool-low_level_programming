#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- Program that add positive numbers.
 * @argc: Integer.
 * @argv: Character.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

int cont;
int add = 0;
int cont2;

if (argc < 1)
{
	printf("0\n");
}
for (cont = 1 ; cont < argc ; cont++)
{
	add += atoi(argv[cont]);
	for (cont2 = 0 ; argv[cont][cont2] != '\0'; cont2++)
	{
		if (!(isdigit(argv[cont][cont2])))
		{
			printf("Error\n");
			return (0);
		}
	}
}
printf("%i\n", add);
return (0);
}
