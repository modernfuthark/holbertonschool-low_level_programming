#include "lists.h"
/**
 * pop_listint - Free the head of a list and return its value
 * @head: Head of list
 * Return: Contents of node
 */

int pop_listint(listint_t **head)
{
	int hold;
	listint_t *newHead;

	if (!*head)
		return (0);

	hold = (*head)->n;
	newHead = (*head)->next;

	free(*head);
	*head = newHead;

	return (hold);
}
