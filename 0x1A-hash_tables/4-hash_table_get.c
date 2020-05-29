#include "hash_tables.h"

/**
 * hash_table_get - etrieves a value associated with a key.
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element,or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	const unsigned char *cast_key = (const unsigned char *) key;
	hash_node_t *aux;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index(cast_key, ht->size);
	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}

	return (NULL);
}
