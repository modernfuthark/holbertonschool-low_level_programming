#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node at index in list head
 * @head: Head of list
 * @index: Index to delete
 * Return: 1 on success, -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int i;

	if (!*head)
		return (-1);
	temp = *head;

	for (i = index; i > 0; i--)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
