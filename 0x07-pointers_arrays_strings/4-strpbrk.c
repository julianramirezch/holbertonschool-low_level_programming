#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: String
 * @accept: string
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int cont;
	int cont2;

	for (cont = 0; s[cont]; cont++)
	{
		for (cont2 = 0; accept[cont2]; cont2++)
		{
			if (accept[cont2] == s[cont])
				return (s + cont);
		}
	}
	return (NULL);
}
