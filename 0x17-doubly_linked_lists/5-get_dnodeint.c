#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: head of the list
 * @index: position
 *
 * Return: node on success NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (p)
	{
		if (idx == index)
			return (p);

		p = p->next;
		idx++;
	}

	return (NULL);
}
