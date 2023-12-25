#include "hash_tables.h"

/**
 * hash_table_delete - delete all hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx] != NULL)
		{
			node = ht->array[idx]->next;
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);

			ht->array[idx] = node;

		}
	}

	free(ht->array);
	free(ht);
}
