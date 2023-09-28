#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: adress of the pointer to the head of the list
 *
 * Return: the new ponter to the head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pcurr, *pnext;

	if (*head == NULL)
		return (NULL);

	pcurr = pnext = (*head)->next;
	(*head)->next = NULL;

	while (pnext)
	{
		pnext = pcurr->next;
		pcurr->next = *head;

		*head = pcurr;
		pcurr = pnext;
	}

	return (*head);
}
