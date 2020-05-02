#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: Double pointer to struct
 * @index: integer
 * Return: 1 in succes  -1 fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	
	dlistint_t *aux;
	dlistint_t *tmp;
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