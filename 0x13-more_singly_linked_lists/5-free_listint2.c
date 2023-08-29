#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: first node of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ph;

	if (head == NULL)
		return;

	while (*head)
	{
		ph = *head;
		*head = (*head)->next;
		free(ph);
	}

	free(head);
	head = NULL;
}
