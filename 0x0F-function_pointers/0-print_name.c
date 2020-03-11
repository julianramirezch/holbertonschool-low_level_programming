#include "function_pointers.h"

/**
 * print_name- Function prints a name.
 * @name: Character
 * @f: Pointer to function.
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}
