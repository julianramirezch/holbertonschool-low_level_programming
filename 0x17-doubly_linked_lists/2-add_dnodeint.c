#include "lists.h"

/**
 * add_dnodeint - adds a newnode at the beginning of a dlistint_t list.
 * @head: Pointer to struct
 * @n: Integer
 * Return: New Node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (free(newn), NULL);
	newn->n = n;
	newn->prev = NULL;
	newn->next = *head;
	*head = newn;

	return (*head);
}
