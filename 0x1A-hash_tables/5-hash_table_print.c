#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, cont;
	hash_node_t *tmp, *aux;

	if (ht == NULL)
		return;

	cont = (ht->size) - 1;
	while (cont != 0)
	{
		tmp = ht->array[cont];
		if (tmp != NULL)
			break;
		cont--;
	}

	printf("{");
	while (index < ht->size)
	{
		aux = ht->array[index];
		while (aux)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (aux != tmp)
				printf(", ");
			aux = aux->next;
		}
		index++;
	}
	printf("}\n");
}
