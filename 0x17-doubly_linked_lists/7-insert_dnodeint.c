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

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	aux = *h, tmp = *h;
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
		aux = aux->next;
		if (cont == (idx - 1))
		{	newn->next = aux;
			tmp->next = newn;
			aux->prev = newn;
			newn->prev = tmp;
			return (newn); }
		if (aux->next == NULL)
		{
			if (cont + 2 == idx)
			{	free(newn);
				return (add_dnodeint_end(h, n));
			}
			break;
		}
		tmp = tmp->next;
		cont++;
	}
	return (free(newn), NULL);
}
