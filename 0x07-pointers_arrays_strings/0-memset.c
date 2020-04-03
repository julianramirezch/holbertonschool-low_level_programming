#include "holberton.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: char to fill
 * @n: N bytes
 * Return: S
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *byte = &b;
	unsigned int cont;

	if (!s)
		return (NULL);
	for (cont = 0; cont < n; cont++)
		s[cont] = *byte;
	return (s);
}
