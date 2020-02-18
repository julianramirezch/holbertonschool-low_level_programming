#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string.
 * @s: Char
 * Return: Always 0.
 */

void rev_string(char *s)
{
int j;
int u;
char i;
for (u = 0 ; *(s + u) != '\0' ; u++)
{
}
u--;
for (j = 0   ; j < u ; j++)
{
	i = *(s + u);
	*(s + u) = *(s + j);
	*(s + j) = i;
	u--;
}
}
