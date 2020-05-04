#include "lists.h"
/**
 * add_dnodeint_end - Add a node to the end of list head
 * @head: Head of list
 * @n: Element to add in new node
 * Return: Pointer to new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
