#include <stdio.h>

/**
 * main - Program thar prints all arguments it receives.
 * @argc: Integer
 * @argv: Character
 * Return: Always O
 */

int main(int argc, char *argv[])
{
int j;

for (j = 0; j < argc ; j++)
{
	printf("%s\n", argv[j]);
}
return (0);
}
