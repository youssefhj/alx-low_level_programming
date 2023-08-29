#include "lists.h"

/**
 * print_listint - print element of the list
 * @h: pointer to a list
 *
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t node;
	listint_t *ph;

	node = 0;
	if (h == NULL)
		return (node);

	ph = h;
	while (ph)
	{
		printf("%d\n", ph->n);
		node++;

		ph = h->next;
	}

	return (node);
}
