#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to struct
 * Return: # elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *aux;
	int cont;

	if (!h)
		return (0);

	aux = h;
	while (aux)
	{
		aux = aux->next;
		cont++;
	}

	return (cont);
}
