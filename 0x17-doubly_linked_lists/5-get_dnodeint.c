#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at index in list head
 * @head: Head of list
 * @index: Index of list
 * Return: Node at index, or NULL if false
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	for (i = 0; temp; i++)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
