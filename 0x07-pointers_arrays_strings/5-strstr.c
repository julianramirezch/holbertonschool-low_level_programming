#include "holberton.h"

/**
 * _strstr - function that searches a string for any of a set of bytes.
 * @haystack: String
 * @needle: string
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int cont, cont2 = 0;
	int *pos, index = 0;
	int num = 0, len;

	pos = &index;
	if (needle[0] == '\0')
		return ("");
	for (len = 0; needle[len]; len++)
	{};
	for (cont = 0; haystack[cont]; cont++)
	{
		if (haystack[cont] == needle[cont2] && needle[cont2] != ' ')
		{
			*pos += cont;
			for (; needle[cont2]; index++, cont2++)
			{
				if (haystack[index] == needle[cont2])
				num += 1;
				else
				{
					cont2 = 0, *pos = 0, num = 0;
					break;
				}
			}
		}
		if (num == len)
		return (haystack + cont);
	}
	return (haystack + cont);
}
