#include "lists.h"

/**
 * free_list - liber memory space
 * @head: head node of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmph;

	while (head)
	{
		tmph = head;
		head = head->next;

		free(tmph->str);
		free(tmph);
	}
}
