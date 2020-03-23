#include "lists.h"
/**
 * free_listint - Free a list
 * @head: Head of list
 * Return: Nothing, function is void
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
