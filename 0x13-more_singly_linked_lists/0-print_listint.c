#include "lists.h"
/**
 * print_listint - Print a list
 * @h: Head of list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;

	}
	return (i);
}
