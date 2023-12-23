#include "hash_tables.h"

/**
 * key_index - key of the index
 * @key: key
 * @size: size of the array of hash table
 *
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
