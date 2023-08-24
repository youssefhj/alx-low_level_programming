#include "lists.h"

/**
 * list_len - length of the list
 * @h: head node of the list
 *
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}

	return (node);
}
