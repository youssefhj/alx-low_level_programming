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

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			ptr = ht->array[idx];
			printf("{");
			while (ptr)
			{
				printf("\'%s\' : '\%s\'", ptr->key, ptr->value);
				if (ptr->next != NULL)
					printf(", ");

				ptr = ptr->next;
			}
			printf("}");
		}
	}
}
