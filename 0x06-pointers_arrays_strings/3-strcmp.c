#include "holberton.h"

/**
 * _strcmp - funtions that compares two strings.
 * @s1: Character.
 * @s2: Character.
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int j;
for (j = 0 ; *(s2 + j) != '\0' ; j++)
{
	if (s1[j] != s2[j])
	{
		return (s1[j] - s2[j]);
	}
}
return (0);
}
