#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - Function that concatenates two strings
 * @dest: Char.
 * @src: Char.
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
int j;
int u;

for (j = 0 ; *(dest + j) != '\0' ; j++)
{
}
for (u = 0 ; *(src + u) != '\0' ; u++ ,j++)
{
	*(dest + j) = *(src + u);
}
return (dest);
}

