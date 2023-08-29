#include "lists.h"

/**
 * sum_listint - sum of all data
 * @head: the head node
 *
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ph = NULL;

	ph = head;
	sum = 0;

	while (ph)
	{
		sum += ph->n;
		ph = ph->next;
	}

	return (sum);
}
