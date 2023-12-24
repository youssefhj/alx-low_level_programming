#include "hash_tables.h"

/**
 * create_hash_node - create hash node
 * @key: key
 * @value: value
 *
 * Return: 1 success 0 otherwise
 */
int create_hash_node(hash_node_t *node, const char *key, const char *value)
{
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
	return (1);
}

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
	hash_node_t *node, *ptr;
	const char *nw_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const  unsigned char *)key, ht->size);
	ptr = ht->array[idx];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			nw_value = strdup(value);
			if (nw_value == NULL)
				return (0);

			free(ptr->value);
			ptr->value = nw_value;
			return (1);
		}
		ptr = ptr->next;
	}

	if (create_hash_node(node, key, value) == 0)
		return (0);

	node->next = ht->array[idx];
	ht->array[idx] = node;

	return (1);
}
