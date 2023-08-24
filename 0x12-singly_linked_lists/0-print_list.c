#include "lists.h"
#include <stdio.h>

/**
 * _strlen - string length
 * @str: string
 *
 * Return: length
 */
unsigned int _strlen(char *str)
{
	unsigned int len;

	if (str == NULL)
		return (0);

	for (len = 0 ; str != '\0' ; len++)
		;

	return (len);
}
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

	ph = h;
	while (ph)
	{
		printf("[%lu] %s\n", _strlen(ph->str), ph->str ? ph->str : "(nil)");
		ph = ph->next;
		node++;
	}

	return (node);
}
