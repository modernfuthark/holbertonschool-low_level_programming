#include "lists.h"
/**
 * free_listint2 - Free a list, set head to NULL
 * @head: Head of list
 * Return: Nothing, function is void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}
}
