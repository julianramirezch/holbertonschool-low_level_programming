#include "lists.h"

/**
 * free_dlistint -  function that free a dlistint_t list.
 * @head: Pointer to struct
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;
	while (aux)
	{
		head = head->next;
		free(aux);
		aux = head;
	}
}
