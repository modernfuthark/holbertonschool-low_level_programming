#include "lists.h"
/**
 * dlistint_len - Get the number of nodes in list h
 * @h: Head of list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
		temp = temp->next;

	return (size);
}
