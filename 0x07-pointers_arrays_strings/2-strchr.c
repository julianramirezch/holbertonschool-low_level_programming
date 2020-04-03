#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: String
 * @c: byte
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int cont;

	for (cont = 0; s[cont]; cont++)
	{
		if (s[cont] == c)
			return (s + cont);
	}
	if (c == '\0')
		return (s);
	return (0);
}
