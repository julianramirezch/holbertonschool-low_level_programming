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
	dlistint_t *aux, *tmp, *newn;
	unsigned int cont = 0;

	if (*h == NULL)
		return (NULL);
	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->prev = NULL;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *h;
		newn->prev = NULL;
		*h = newn;
	}

	aux = *h;
	tmp = *h;

	while (aux)
	{
		aux = aux->next;
		if (cont == idx)
		{
			tmp->next = newn;
			newn->next = aux;
			newn->prev = tmp;
			aux->prev = newn;
		}
		tmp = tmp->next;
		cont++;
	}

	if (idx > cont)
		return (free(newn), NULL);

	return (newn);
}
