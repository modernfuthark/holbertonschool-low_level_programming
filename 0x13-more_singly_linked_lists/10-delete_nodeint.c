#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node at index
 * @head: Head of list
 * @index: Index to delete
 * Return: 1 on success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next, *hcpy;
	unsigned int nidx = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	hcpy = *head;
	while (nidx <= index)
	{
		if (!hcpy)
			return (-1);
		hcpy = hcpy->next;
		nidx++;
		if (nidx == index - 1)
			prev = hcpy;
	}
	next = hcpy->next;
	free(hcpy);

	prev->next = next;
	return (1);
}
