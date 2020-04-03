#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: String
 * @accept: string
 * Return: pointer
 */

unsigned int _strspn(char *s, char *accept)
{
	int cont;
	int cont2;

	for (cont = 0; s[cont]; cont++)
	{
		for (cont2 = 0; accept[cont2]; cont2++)
		{
			if (s[cont] == accept[cont2])
				break;
		}
		if (!accept[cont2])
			break;
	}
	return (cont);
}
