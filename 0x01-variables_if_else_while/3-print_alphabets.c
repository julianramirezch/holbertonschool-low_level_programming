#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */

int main(void)
{
	char j = 97;
	char u = 65;

	while (j >= 97 && j <= 122)
	{
		putchar(j);
		j++;
	}
	while (u >= 65 && u <= 90)
	{
		putchar(u);
		u++;
	}
		putchar('\n');
		return (0);
}
