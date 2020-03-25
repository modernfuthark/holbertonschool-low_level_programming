#include "lists.h"
/**
 * insert_nodeint_at_index - Insert code at the index of a list
 * @head: Head of list
 * @idx: Index to insert at
 * @n: Element of new node
 * Return: Address of new node, NULL on fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *index;
	unsigned int nidx = idx;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!*head)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	index = *head;
	while (--nidx)
	{
		if (!index->next)
		{
			free(newnode);
			return (NULL);
		}
		index = index->next;
	}
	newnode->next = index->next;
	index->next = newnode;
	return (newnode);
}
