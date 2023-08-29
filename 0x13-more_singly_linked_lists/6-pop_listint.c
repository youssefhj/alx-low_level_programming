#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: adress of the head node
 *
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *hp;

	if (*head == NULL)
		return (0);

	hp = *head;
	data = hp->n;

	*head = (*head)->next;
	free(hp);

	return (data);
}
