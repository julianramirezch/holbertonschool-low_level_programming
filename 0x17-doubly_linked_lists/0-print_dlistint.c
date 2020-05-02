#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Const struct pointer
 * Return: 0 if no elements , i is number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *aux;
	int i = 0;

	if (!h)
		return (0);

	aux = h;
	while (aux)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		i++;
	}

	return (i);
}
