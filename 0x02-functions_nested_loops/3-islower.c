#include "holberton.h"
#include <stdio.h>
/**
 * _islower - Checks for lowercase character
 * @c: Integer
 * Return: Always 0.
 */
int _islower(int c)

{
if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
}
