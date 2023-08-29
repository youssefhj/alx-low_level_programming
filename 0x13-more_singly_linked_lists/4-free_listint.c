#include "lists.h"

/**
 * free_listint - free the list
 * @head: first node of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ph;

	while (head)
	{
		ph = head;
		head = head->next;
		free(ph);
	}
}
