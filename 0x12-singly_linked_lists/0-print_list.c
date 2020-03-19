#include "lists.h"
/**
 * print_list - Print a list
 * @h: Head of list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp = h;

	while (temp)
	{
		i++;
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
