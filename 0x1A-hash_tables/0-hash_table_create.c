#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the hash table
 *
 * Return: NULL | hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	for (i = 0 ; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
