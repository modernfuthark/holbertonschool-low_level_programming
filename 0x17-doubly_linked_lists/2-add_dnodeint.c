#include "lists.h"
/**
 * add_dnodeint - Add a node to the head of list head
 * @head: head of list
 * @n: Element to add to node
 * Return: Pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	new->n = n;
	new->prev = NULL;

	return (new);
}
