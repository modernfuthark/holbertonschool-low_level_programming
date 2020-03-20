#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Head of list
 * Return: Nothing, function is void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
