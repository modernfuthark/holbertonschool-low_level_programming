#include "lists.h"
/**
 * print_dlistint - Print a doubly linked list's content
 * @h: Head of list
 * Return: Number of nodes, -1 on error
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size;
	const dlistint_t *temp;

	if (!h)
		return (0);

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (-1);

	temp = h;

	for (size = 0; temp; size++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (size);
}
