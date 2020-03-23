#include "lists.h"

/**
 * add_nodeint_end - func. that adds a new node at the end of a listint_t list.
 * @head: Double pointer to head
 * @n: Index
 * Return: *head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *aux;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	newn->next = NULL;
	aux = *head;

	if (aux == NULL)
		*head = newn;
	else
	{
		for (; aux->next; aux = aux->next)
		{};
		aux->next = newn;
	}
	return (*head);
}
