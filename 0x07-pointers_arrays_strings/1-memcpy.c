#include "holberton.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: string dest
 * @src: string src
 * @n: N bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int cont;
	 char *dest2 = dest;

	if (!src)
		return (NULL);
	for (cont = 0; cont < n; cont++)
	{
		dest2[cont] = src[cont];
	}
	return (dest2);
}
