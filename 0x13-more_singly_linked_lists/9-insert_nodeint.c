#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: Pointer to head.
 * @n: Pointer to n
 * Return: Value of head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Double pointer.
 * @idx: index
 * @n: integer
 * Return: newn
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *aux, *newn, *tmp;
unsigned int cont, cont2;

if (*head == NULL)
	return (NULL);
aux = *head;
if (idx == 0)
	add_nodeint(head, n);
if (idx > 0)
{
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
}
return (newn);
}
