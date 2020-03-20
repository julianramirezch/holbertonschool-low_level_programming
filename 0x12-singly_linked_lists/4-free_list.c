#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: Pointer
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *aux;

	for (aux = head; aux; aux = head)
	{
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
