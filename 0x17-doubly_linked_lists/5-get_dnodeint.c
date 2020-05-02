#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: Pointer to struct
 * @index: Unsigned int index
 * Return: Node at index or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int cont;

	aux = head;
	for (cont = 0; aux; cont++)
	{
		if (cont == index)
			break;
		aux = aux->next;
	}
	if (aux == NULL)
		return (NULL);
	else
		return (aux);
}
