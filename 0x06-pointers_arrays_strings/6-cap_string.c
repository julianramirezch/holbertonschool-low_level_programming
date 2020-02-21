#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Character.
 * Return: s
 */

char *cap_string(char *s)
{
int u;
char l[] = ",;.!?\"(){} \n\t";
int i;
for (u = 0 ; *(s + u) != '\0' ; u++)
{
for (i = 0 ; i < 13 ; i++)
{
	if (u== 0 && (*(s+u) >= 97 && *(s+u) <= 122))
		    {
			    *(s + 0) = *(s + 0) - 32;
		    }
	if ((*(s + u) == l[i]))
	{
		if (*(s + (u + 1)) >= 97 && *(s + (u + 1)) <= 122)
		{
			*(s + (u + 1)) = *(s + (u + 1)) - 32;
		}
	}
}
}
return (s);
}
