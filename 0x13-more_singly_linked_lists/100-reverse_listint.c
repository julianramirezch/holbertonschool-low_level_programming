#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: Double Pointer.
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = NULL;
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next;
		(*head)->next = aux;
		aux = *head;
		*head = tmp;
	}
	*head = aux;
	return (*head);
}
