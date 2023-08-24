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

	for (len = 0 ; str[len] != '\0' ; len++)
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
	size_t node = 0;

	while (h)
	{
		printf("[%u] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		node++;
	}

	return (node);
}
