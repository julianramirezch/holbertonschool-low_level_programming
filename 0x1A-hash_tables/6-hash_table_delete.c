#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	int index = 0, size = ht->size;
	hash_node_t *aux, *head;

	for (; index < size; index++)
	{
		if (ht->array[index] != NULL)
		{
			head = ht->array[index];
			for (aux = head; aux; aux = head)
			{
				head = head->next;
				free(aux->key);
				free(aux->value);
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
