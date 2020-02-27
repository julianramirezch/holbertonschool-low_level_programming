#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Pionter to the string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * palindrome - check the word.
 * @s: Character
 * @j: Integer
 * Return: 0
 */
int palindrome(char *s, int j)
{
	if (*s != '\0')
	{
		if (*s == *(s + j))
		{
			return (1 * (palindrome(s + 1, j - 2)));
		}
		else
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: Character
 * Return: 0.
 */
int is_palindrome(char *s)
{
	int j = _strlen_recursion(s) - 1;

	if (i <= 0)
		return (1);
	else
		return (palindrome(s, j));
}
