#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a nth index
 * @head: head of the list
 * @index: the specified index
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ph = NULL;
	unsigned int i = 0;

	ph = head;
	while (ph)
	{
		if (i == index)
			return (ph);

		i++;
		ph = ph->next;
	}

	return (NULL);
}
