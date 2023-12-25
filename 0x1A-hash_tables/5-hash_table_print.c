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
	int dec;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			ptr = ht->array[idx];
			dec = idx - 1;
			while (ptr)
			{
				while (dec >= 0)
				{
					if (ht->array[dec] != NULL)
					{
						printf(", ");
						break;
					}
					dec--;
				}
				printf("\'%s\': \'%s\'", ptr->key, ptr->value);
				if (ptr->next != NULL)
					printf(", ");

				ptr = ptr->next;
			}
		}
		printf("}\n");
	}
}
