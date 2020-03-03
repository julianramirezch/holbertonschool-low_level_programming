#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup- returns a pointer to a newly allocated space in memory.
 * @str: Character.
 * Return: str
 */

char *_strdup(char *str)
{

int cont;
int cont2;
char *str2;

for (cont = 0; str[cont]; cont++)
{}
cont++;
str2 = malloc(sizeof(char) * cont);
if (str2 == NULL)
	return (NULL);
for (cont2 = 0 ; cont2 < cont ; cont2++)
{
	str2[cont2] = str[cont2];
}
if (str == NULL)
	return (NULL);
return (str2);
}
