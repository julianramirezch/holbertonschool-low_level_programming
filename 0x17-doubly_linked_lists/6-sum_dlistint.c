#include "lists.h"

/**
 * sum_dlistint -  function that sum of all the data (n)
 * @head: pointer to struct
 * Return: 0 if list empty , res is sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int res = 0;

	if (head == NULL)
		return (0);

	aux = head;
	while (aux)
	{
		res += aux->n;
		aux = aux->next;
	}

	return (res);
}
