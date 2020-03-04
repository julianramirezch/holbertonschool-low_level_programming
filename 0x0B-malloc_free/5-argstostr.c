#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr- function that concatenates all the arguments of your program.
 * @ac: Integer
 * @av: Array pointer
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	int cont1;
	char *s;
	int cont2;
	int cont3;
	int cont4;
	int cont5;
	int cont6;

	cont3 = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (cont1 = 0; cont1 < ac ; cont1++)
	{
		for (cont2 = 0; av[cont1][cont2] ; cont2++)
		{
			cont3++;
		}
	}
	s = malloc(sizeof(char) * (ac + 1 + cont3));
	if (s == NULL)
		return (NULL);

	cont4 = 0;

	for (cont5 = 0; cont5 < ac ; cont5++)
	{
		for (cont6 = 0; av[cont5][cont6] ; cont6++)
		{
			s[cont4] = av[cont5][cont6];
			cont4++;
		}
		s[cont4] = '\n';
		cont4++;
	}
	return (s);
}
