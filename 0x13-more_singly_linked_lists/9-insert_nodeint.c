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
listint_t *aux, *newn, *tmp;
unsigned int cont;

if (*head == NULL && idx > 0)
	return (NULL);
newn = malloc(sizeof(listint_t));
if (newn == NULL)
	return (NULL);
newn->n = n;
newn->next = NULL;
aux = *head;
tmp = *head;
if (idx == 0)
{
	newn->next = *head;
	*head = newn;
}
for (cont = 0; aux; cont++)
{
	aux = aux->next;
	if (cont == (idx - 1))
	{
		newn->next = aux;
		tmp->next = newn;
	}
	tmp = tmp->next;
}
if (idx > cont)
{
	free(newn);
	return (NULL);
}
return (newn);
}
