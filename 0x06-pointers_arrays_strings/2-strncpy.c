#include "holberton.h"

/**
 * _strncpy - function that copies a strings.
 * @dest: Char.
 * @src: Char.
 * @n: integer.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;
int u;

j = 0;
for (u = 0 ; (u < n) && (*(src + u) != '\0') ; u++, j++)
{
	*(dest + j) = *(src + u);
}
for ( ; u < n ; u++)
{
	*(dest + u) = '\0';
}

		return (dest);
}
