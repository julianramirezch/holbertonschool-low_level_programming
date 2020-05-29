#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht:  hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	int index = 0, last_index, cont;
	hash_node_t *tmp;
	int size = ht->size;

	if (ht == NULL)
		return;

	for (cont = 0; cont < size; cont++)
	{
		if (ht->array[cont] == NULL)
			continue;
		tmp = ht->array[cont];
		last_index = key_index((const unsigned char *) tmp->key, size);
	}
	putchar('{');
	for (index = 0; index < size; index++)
	{
		if (ht->array[index] == NULL)
			continue;
		printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
		if (index != last_index)
			printf(", ");
	}
	putchar('}');
	putchar('\n');
}
