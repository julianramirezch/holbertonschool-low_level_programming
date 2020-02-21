#include "holberton.h"

/**
 * rot13 - Function that encodes a string using rot13.
 * @s: Character
 * Return: S.
 */

char *rot13(char *s)
{
int j;
int u;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (j = 0 ; *(s + j) != '\0' ; j++)
{
	for (u = 0 ; u < 52 ; u++)
	{
		if (*(s + j) == *(a + u))
		{
			*(s + j) = *(b + u);
		}
	}
}
return (s);
}
