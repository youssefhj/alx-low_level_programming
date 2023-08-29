#include "lists.h"

/**
 * listint_len - number of element
 * @h: pointer to the list
 *
 * Return: size fo the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;
	const listint_t *hp;

	node = 0;
	hp = h;

	if (hp == NULL)
		return (node);

	while (hp)
	{
		node++;
		hp = hp->next;
	}

	return (node);
}
