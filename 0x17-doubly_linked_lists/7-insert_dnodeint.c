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

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	aux = *h;
	if (*h == NULL)
	{
		*h = newn;
		newn->next = NULL;
		return (newn); }
	if (idx == 0)
	{
		newn->next = *h;
		aux->prev = newn;
		*h = newn;
		return (newn); }
	while (aux)
	{
		if (cont == idx)
		{
			aux->prev->next = newn;
			newn->prev = aux->prev;
			aux->prev = newn;
			newn->next = aux;
			return (newn);
		}
		if (!aux->next && idx == cont + 1)
			return (free(newn), add_dnodeint_end(h, n));
		aux = aux->next;
		cont++;
	}
	return (free(newn), NULL);
}
