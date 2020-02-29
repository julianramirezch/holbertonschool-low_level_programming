#include <stdio.h>

/**
 * main - program that prints the number of arguments passsed into it.
 * @argc: int
 * @argv: char
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%i\n", argc - 1);
	return (0);
}
