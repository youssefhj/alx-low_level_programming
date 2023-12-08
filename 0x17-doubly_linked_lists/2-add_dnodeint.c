#include "lists.h"

/**
 * add_dnodeint - add node at the begining
 * @head: head of the list
 * @n: data
 *
 * Return: the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = null;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (head == NULL || *head == NULL)
		return (*head = node);

	(*head)->prev = node;
	*head = node;

	return (*head);
}
