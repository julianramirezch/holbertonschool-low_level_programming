#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Constant pointer.
 * Return: Cont.
 */

size_t print_list(const list_t *h)
{
	int cont;

	for (cont = 0; h; cont++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return(cont);
}
