#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a listint_t.
 * @head: Pointer to head
 * @index: Index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
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
