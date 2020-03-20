#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to head.
 * @str: String.
 * Return: Head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	
	for(len = 0; str[len]; len++)
	{};
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
