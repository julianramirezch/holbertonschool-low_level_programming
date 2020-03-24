#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer.
 * @idx: index
 * @n: integer
 * Return: newn
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux;
	listint_t *newn;
	listint_t *tmp;
	unsigned int cont;
	unsigned int cont2;

	if (*head == NULL)
		return (NULL);
	aux = *head;
	for (cont = 0; aux; cont++)
	{
		if (cont == idx)
		{
			newn = malloc(sizeof(listint_t));
			if (newn == NULL)
				return (NULL);
			newn->n = n;
			newn->next = aux;
		}
		aux = aux->next;
	}
	tmp = *head;
	for (cont2 = 0; tmp; cont2++)
	{
		if (cont2 == (idx - 1))
		{
			tmp->next = newn;
		}
		tmp = tmp->next;
	}
	return (newn);
}
