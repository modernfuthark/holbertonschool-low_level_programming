#include "lists.h"
/**
 * free_dlistint - Free list head
 * @head: Head of list
 * Return: Nothing, function is void
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (!head->next)
		{
			free(head);
		}
		else
		{
			free_dlistint(head->next);
			free(head);
		}
	}
	else
		return;
}