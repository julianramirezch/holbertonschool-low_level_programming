#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat- function that concatenates two strings.
 * @s1: Character
 * @s2: Character
 * @n: Unisgned int.
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int conts1;
unsigned int conts2;
unsigned int len;
unsigned int cont3;
unsigned int cont4;
char *dest;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (conts1 = 0; s1[conts1]; conts1++)
{
}
for (conts2 = 0; s2[conts2]; conts2++)
{
}
if (n >= conts2)
	len = conts1 + conts2 + 1;
else
	conts2 = n;
	len = conts1 + conts2 + 1;
dest = malloc(sizeof(char) * len);
if (dest == NULL)
	return (NULL);
for (cont3 = 0; cont3 < conts1 && s1[cont3] ; cont3++)
{
	dest[cont3] = s1[cont3];
}
for (cont4 = 0; cont4 < conts2 ; cont4++, cont3++)
{
	dest[cont3] = s2[cont4];
}
dest[cont3] = '\0';
return (dest);
}
