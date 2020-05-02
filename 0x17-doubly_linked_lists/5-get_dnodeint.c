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

	if (head == NULL)
		return (NULL);

	aux = head;
	for (cont = 0; cont <= index; cont++)
	{
		if (cont == index)
			return (aux);
		aux = aux->next;
	}

	if (index > cont)
		return (NULL);

	return (NULL);
}
