#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a nth index
 * @head: head node
 * @idx: index
 * @n: data
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current, *previous;
	unsigned int index = 0;

	node = current = previous = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	current = previous = *head;
	if (*head == NULL && idx == 0)
	{
		*head = node;
		return (node);
	}

	while (current)
	{
		if (index == idx)
		{

			node->next = current;
			previous->next = node;

			if (idx == 0)
				*head = current;

			return (node);
		}
		index++;
		previous = current;
		current = current->next;
	}

	index++;
	if (index == idx)
	{
		previous->next = node;
		return (node);
	}

	return (NULL);
}
