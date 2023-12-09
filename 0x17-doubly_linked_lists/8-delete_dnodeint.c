#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of the list
 * @index: index
 *
 * Return: -1 on failure or 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;

	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		if (p == NULL)
			return (-1);

		p = p->next;
		index--;
	}

	if (p == *head)
	{
		*head = p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		p->prev->next = p->next;

		if (p->next != NULL)
			p->next->prev = p->prev;
	}

	free(p);
	return (1);
}
