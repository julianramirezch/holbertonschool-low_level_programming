#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a idx position.
 * @h: Double pointer to struct.
 * @idx: given index
 * @n: Integer
 * Return: NULL or New node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *aux, *newn;
	unsigned int cont = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;

	aux = *h;
	while (aux)
	{
		if (cont == idx)
		{
			newn->next = aux;
			newn->prev = aux->prev;
			aux->prev->next = newn;
			aux->prev = newn;
			return (newn);
		}
		if (aux->next ==NULL && (cont + 1) == idx)
		{
			free(newn);
			return (add_dnodeint_end(h, n));
		}
		aux = aux->next;
		cont++;
	}
	free(newn);
	return (NULL);
}
