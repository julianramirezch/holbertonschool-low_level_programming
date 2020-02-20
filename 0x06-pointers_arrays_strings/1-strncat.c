#include "holberton.h"
#include <stdio.h>

/*
 * _strncat - Function that concatenates two strings.
 * @dest: Char.
 * @src: Char.
 * @n: Integer.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int j;
int u;

for (j = 0 ; *(dest + j) ; j++)
{
}
for (u = 0 ; (u < n) && (*(src + u) != '\0') ; u++, j++)
{
	*(dest + j) = *(src + u);
}
return (dest);
}
