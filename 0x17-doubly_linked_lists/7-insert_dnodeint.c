#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node at idx in h
 * @h: Head of list
 * @idx: Index
 * @n: Element inside new node
 * Return: Pointer to new node, NULL on error
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	int i;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	temp = *h;

	if (idx == 0) /*Index is 0, create new head...*/
	{
		(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = idx; i > 1; i--)
	{
		if (!temp) /*Index > len of list, free new and return NULL*/
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}

	/*Update new's neighbors*/
	new->next = temp->next;
	new->prev = temp;

	/*Introduce neighbors to new*/
	new->next->prev = new;
	new->prev->next = new;

	return (new);
}
