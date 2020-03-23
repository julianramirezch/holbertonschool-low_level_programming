#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head.
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int cont;

	for (cont = 0; h; cont++)
		h = h->next;
	return (cont);
}
