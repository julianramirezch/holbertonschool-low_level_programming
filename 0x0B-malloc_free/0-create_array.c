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
unsigned int cont;
char *array;
if (size == 0)
	return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
	return (NULL);
for (cont = 0; cont < size ; cont++)
{
	array[cont] = c;
}
return (array);
}
