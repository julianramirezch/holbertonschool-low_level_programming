#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Array of chars,and initializes it with a specific char.
 * @size: Unsigned Integer.
 * @c: Character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
int cont;
char array;
if (size == 0)
	return (NULL);
if (array == NULL)
	return (NULL);
array = malloc(sizeof(char) * size);
for (cont = 0; cont < size ; cont++)
{
	array[cont] = c;
}
return (array);
}
