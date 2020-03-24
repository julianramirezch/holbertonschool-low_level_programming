#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list,returns the head node
 * @head: Double poinuter
 * Return: Node
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int node;

	aux = *head;
	if (head == NULL)
		return (0);
	*head = aux->next;
	node = aux->n;
	free(aux);
	return (node);
}
