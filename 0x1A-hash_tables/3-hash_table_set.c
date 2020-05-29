#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * Return: 1 in success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	const unsigned char *cast_key = (const unsigned char *) key;
	hash_node_t *newn;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	index = key_index(cast_key, ht->size);

	while (ht->array[index]->next != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}

	newn = malloc(sizeof(hash_node_t));
	if (newn == NULL)
		return (0);

	newn->key = strdup(key);
	newn->value = strdup(value);

	if (ht->array[index] == NULL)
		newn->next = NULL;

	if (ht->array[index] != NULL)
		newn->next = ht->array[index];

	ht->array[index] = newn;

	return (1);
}
