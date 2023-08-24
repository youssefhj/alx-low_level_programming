#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: double pointer
 * @str: string
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmph;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (*head);

	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = NULL;

	tmp = *head;
	if (tmp == NULL)
	{
		*head = node;
		return (node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmph->next = node;

	return (node);
}
