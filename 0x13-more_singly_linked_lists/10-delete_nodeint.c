#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index
 * @head: Double pointer
 * @index: index
 * Return: -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *tmp;
	unsigned int cont;

	if (*head == NULL)
		return (-1);

	aux = *head;
	for (cont = 0; aux; cont++)
	{
		if (cont == index)
		{
			*head = (*head)->next;
			free(aux);
			return (1);
		}
		if (cont == (index - 1))
		{
			tmp = aux;
			tmp = tmp->next;
			aux->next = tmp->next;
			free(tmp);
			return (1);
		}
		aux = aux->next;
	}
	return (-1);
}
