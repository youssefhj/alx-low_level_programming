#include "hash_tables.h"

/**
 * hash_table_get - retreive value associated with the key
 * @ht: hash table
 * @key: key
 *
 * Return: value | NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[idx];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);

		ptr = ptr->next;
	}

	return (NULL);
}
