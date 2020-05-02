#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to struct
 * @n: Integer
 * Return: New Node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn, *aux;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (free(newn), NULL);
	newn->n = n;
	newn->next = NULL;
	newn->prev = NULL;

	if (*head == NULL)
	{
		*head = newn;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}

	aux = *head;
	while (aux)
	{
		if (aux->next == NULL)
		{	aux->next = newn;
			newn->prev = aux;
			return (newn);
		}
		aux = aux->next;
	}

	return (free(newn), NULL);
}
