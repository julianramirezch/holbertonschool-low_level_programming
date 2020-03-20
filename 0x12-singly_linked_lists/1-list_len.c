#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: Pointer
 * Return: Cont;
 */

size_t list_len(const list_t *h)
{
	int cont;

	for (cont = 0; h; cont++)
	{
		h = h->next;
	}
	return (cont);
}
