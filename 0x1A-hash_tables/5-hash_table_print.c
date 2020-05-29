#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int index = 0, cont;
	hash_node_t *tmp, *aux;
	int size = ht->size;

	if (ht == NULL)
		return;

	for (cont = size ; cont != 0 ; cont--)
	{
		tmp = ht->array[cont];
		if (tmp != NULL)
			break;
	}

	printf("{");
	for (index = 0; index < size; index++)
	{
		aux = ht->array[index];
		while (aux)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (aux != tmp)
				printf(", ");
			aux = aux->next;
		}
	}
	printf("}");
	printf("\n");
}
