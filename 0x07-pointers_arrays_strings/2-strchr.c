#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: String
 * @c: byte
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	if (!s)
		return (NULL);
	if (c == '\0')
		return (s);
	while (s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
