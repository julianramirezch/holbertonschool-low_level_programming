#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: Pointer to head:
 * Return: 
 */

size_t print_listint(const listint_t *h)
{
	int cont;
	for (cont = 0; h; cont++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (cont);
}
