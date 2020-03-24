#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Double pointer.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;

	for (aux = *head; aux; aux = *head)
	{
		(*head) = (*head)->next;
		free(aux);
	}
}
