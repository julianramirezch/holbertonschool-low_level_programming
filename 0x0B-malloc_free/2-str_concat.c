#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: Char.
 * @s2: Char.
 * Return: dest
 */

char *str_concat(char *s1, char *s2)
{
	int conts1;
	int conts2;
	int length;
	int cont3;
	int cont4;
	char *dest;

	if(!(s1 == NULL || s2 == NULL))
	{
	for (conts1 = 0 ; s1[conts1] ; conts1++)
	{}
	for (conts2 = 0; s2[conts2]; conts2++)
	{}

	length = conts1 + conts2;
	length++;

	dest = malloc(sizeof(char) * length);
	if (dest == NULL)
		return (NULL);
	for (cont3 = 0; cont3 < conts1 && s1[cont3] ; cont3++)
	{
		dest[cont3] = s1[cont3];
	}
	for (cont4 = 0; cont4 <= conts2 ; cont4++, cont3++)
	{
		dest[cont3] = s2[cont4];
	}
	return (dest);
	}
	else
		return (NULL);
}
