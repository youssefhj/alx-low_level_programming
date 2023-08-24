#include "lists.h"
#include <stdio.h>

/**
 * print_list - display content of the list
 * @h: head node of the list
 *
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	list_h *ph = NULL;
	size_t node = 0;

	if (ph->str == NULL)
		printf("%s\n", "[0] (nil)");

	ph = h;
	while (ph)
	{
		printf("[%lu] %s\n", ph->len, ph->str);
		ph = ph->next;
		node++;
	}

	return (node);
}
