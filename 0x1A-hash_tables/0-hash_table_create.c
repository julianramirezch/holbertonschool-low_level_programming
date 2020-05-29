#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size:  size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;
	unsigned long int i = 0;

	if (size <= 0)
		return (NULL);

	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}

	for (; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
