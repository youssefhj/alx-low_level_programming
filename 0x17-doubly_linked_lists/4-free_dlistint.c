#include "lists.h"

/**
 * free_dlistint - free the whole list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
