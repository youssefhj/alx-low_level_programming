#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: head of the list
 * @n: data
 *
 * Return: on success the new element or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *p = *head;

	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (head == NULL || node == NULL)
		return (node ? free(node), NULL : NULL);

	if (*head == NULL)
		return (*head = node);

	while (p->next)
		p = p->next;

	p->next = node;
	node->prev = p;

	return (node);
}
