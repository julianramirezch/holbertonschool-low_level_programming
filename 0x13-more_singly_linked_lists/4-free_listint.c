#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to head
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	for (; head; head = aux)
	{
		aux = head->next;
		free(head);
	}
}
