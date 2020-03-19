#include "lists.h"
/**
 * list_len - Lists the length of a list
 * @h: Head of list
 * Return: Number of nodes in list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *temp = h;

	while (temp)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
