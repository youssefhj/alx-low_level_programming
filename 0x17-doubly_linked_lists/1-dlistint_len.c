#include "lists.h"

/**
 * dlistint_len - length of the list
 * @h: head of the list
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
