#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: Character
 * Return: Result * sign.
 */

int _atoi(char *s)
{
	int cont;
	int res = 0;
	int sign = 1;

	if (s == NULL)
		return (NULL);
	for (cont = 0 ; s[cont] ; cont++)
	{
		if (s[cont] == 45)
			sign = sign * -1;
		if (s[cont] == 43)
			sign = sign * 1;
		if (s[cont] >= 48 && s[cont] <= 57)
		{
			res = res * 10 + s[cont] - 48;
			if (!(s[cont + 1] >= 48 && s[cont + 1] <= 57))
				break;
		}
	}
	return (res * sign);
}
