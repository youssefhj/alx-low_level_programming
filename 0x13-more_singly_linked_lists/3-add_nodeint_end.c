#include "lists.h"

/**
 * add_nodeint_end - add node in the end
 * @head: the head of the list
 * @n: data
 *
 * Return: the added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ph, *node;

	ph = node = NULL;

	node = (listint_t *)malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		ph = *head;
		while (ph->next)
			ph = ph->next;

		ph->next = node;
	}

	return (node);
}
