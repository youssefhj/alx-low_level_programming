#include "lists.h"

/**
 * print_dlistint - print the list
 * @h: head of the list
 *
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *p = h;
	size_t node = 0;

	if (p == NULL)
		return (0);

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		node++;
	}

	return (node);
}
