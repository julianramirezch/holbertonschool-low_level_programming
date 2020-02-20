#include "holberton.h"

/**
 * string_toupper - Function that changes all lowercase to uppercase.
 * @s: Char.
 * Return: s.
 */

char *string_toupper(char *s)
{
int j;
int u;

for (j = 0 ; *(s + j) != '\0' ; j++)
{
}
for (u = 0 ; *(s + u) != '\0' ; u++)
{
	if (*(s + u) >= 97 && *(s + u) <= 122)
	{
		*(s + u) = *(s + u) - 32;
	}
}
return (s);
}
