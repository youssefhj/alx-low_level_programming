#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: double pointer
 * @str: string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node, *tmph;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (*head);

	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = NULL;

	tmph = *head;
	*head = node;
	node->next = tmph;

	return (node);
}
