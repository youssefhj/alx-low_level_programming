#include "hash_tables.h"

/**
 * hash_table_set - set value to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL || node->value == NULL)
	{
		free(node);
		return (0);
	}

	node->next = NULL;

	idx = key_index((const  unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
		return (1);
	}

	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
