#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int u = 0;
char j;
while (u <= 10)
{
for (j = 97 ; j <= 122 ; j++)
{
_putchar(j);
}
_putchar('\n');
u++;
}
}
