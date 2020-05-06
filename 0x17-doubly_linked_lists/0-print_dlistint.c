#include "lists.h"
/**
 * print_dlistint - Print a doubly linked list's content
 * @h: Head of list
 * Return: Number of nodes, -1 on error
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size;

	for (size = 0; h; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
