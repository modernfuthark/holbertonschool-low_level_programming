#include "lists.h"
/**
 * listint_len - Get the length of a list
 * @h: Head of list
 * Return: Number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
