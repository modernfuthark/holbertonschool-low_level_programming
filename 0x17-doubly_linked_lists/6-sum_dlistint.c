#include "lists.h"
/**
 * sum_dlistint - Get the sum of list head
 * @head: Head of list
 * Return: Sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
