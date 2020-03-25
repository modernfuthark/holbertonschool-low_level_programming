#include "lists.h"
/**
 * sum_listint - Get the sum of a list of ints
 * @head: Head of list
 * Return: Sum of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

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
