#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: Pointer.
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	listint_t *aux;
	int sum = 0;

	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
