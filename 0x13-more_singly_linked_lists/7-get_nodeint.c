#include "lists.h"
/**
 * get_nodeint_at_index - Get node at index of list
 * @head: Head of list
 * @index: Index to get
 * Return: index node of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = index;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;

	while (counter--)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
