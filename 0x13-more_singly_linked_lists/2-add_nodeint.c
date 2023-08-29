#include "lists.h"

/**
 * add_nodeint - add node in the begining
 * @head: the head of the list
 * @n: data
 *
 * Return: the header of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
		*head = node;
		node->next = ph;
	}

	return (node);
}
