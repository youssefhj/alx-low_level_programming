#include "lists.h"

/**
 * sum_dlistint - sum of all data in the list
 * @head: the head of the list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
