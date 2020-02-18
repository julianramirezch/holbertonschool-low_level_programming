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
char a[10];
for (u = 0 ; *(s + u) != '\0' ; u++)
{
	*(a + u) = s[u];
}
for (j = u   ; j >= 0 ; j--)
{
	if (j == u)
	{
		continue;
	}
	else
	{
		*(s + ((u - 1) - j)) = a[j];
	}
}
}
