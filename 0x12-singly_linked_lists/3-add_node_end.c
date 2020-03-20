#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Pointer head
 * @str: Pointer
 * Return: Head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *aux;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (len = 0 ; str[len]; len++)
	{};
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	aux = *head;
	if (!aux)
		*head = new;
	else
	{
		for (len = 0; aux->next; aux = aux->next)
		{};
		aux->next = aux;
	}
	return (*head);
}
