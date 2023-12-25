#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr;
	int ok = 0;
	
	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		dec = idx - 1;
		while (ptr)
		{
			if (ok = 1)
				printf(", ");

			printf("'%s\: '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			
			ok = 1;
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
