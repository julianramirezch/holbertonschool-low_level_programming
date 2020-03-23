#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Pointer head
 * @str: Pointer
 * Return: Head
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newn;
list_t *aux;
int len;

newn = malloc(sizeof(list_t));
if (!newn)
	return (NULL);
for (len = 0; str[len]; len++)
{};
newn->str = strdup(str);
newn->len = len;
newn->next = NULL;

aux = *head;
if (!aux)
	*head = newn;
	else
{
	for (; aux->next; aux = aux->next)
	{};
	aux->next = newn;
}
return (*head);
}
