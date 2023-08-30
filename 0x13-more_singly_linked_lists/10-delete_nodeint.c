#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at i index
 * @head: head node
 * @index: index
 *
 * Return: 1 success -1 otherwize
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *dnode;
	unsigned int i = 0;


	if (!head || !*head)
		return (-1);

	current = *head;
	while (current)
	{
		if (i == (index - 1))
		{
			dnode = current->next;
			if (!dnode)
				return (-1);

			current->next = dnode->next;

			dnode->next = NULL;
			free(dnode);

			return (1);
		}
		i++;

		current = current->next;
	}

	return (-1);
}
