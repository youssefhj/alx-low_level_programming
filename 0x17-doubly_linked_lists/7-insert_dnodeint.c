#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at index
 * @h: head of the list
 * @idx: the index
 * @n: data
 *
 * Return: NULL on failure or the added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *p = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
		idx--;
	}

	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = p->next;
	node->prev = p;
	p->next->prev = node;
	p->next = node;

	return (node);
}
