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

for (j = 0 ; *(s + j) ; j++)
{
	for (u = 0 ; *(a + u) ; u++)
	{
		if (*(s + j) == *(a + u))
		{
			*(s + j) = *(b + u);
			break;
		}
	}
}
return (s);
}
