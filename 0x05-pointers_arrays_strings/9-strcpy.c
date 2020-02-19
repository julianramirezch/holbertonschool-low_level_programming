#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src,including '\0'.
 * @dest: Char.
 * @src: char.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
char j;
int u;
int l;
for (u = 0 ; *(src + u) != '\0' ; u++)
{
}
for (l = 0 ; l <= u ; l++)
{
	j = *(src + l);
	*(dest + l) = j;
}
return (dest);
}
