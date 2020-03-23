#include "lists.h"
/**
 * add_nodeint_end - Add node to end of list
 * @head: Head of list
 * @n: int to add into new node
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *tail;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	tail = *head;
	if (!*head)
	{
		*head = newNode;
		return (*head);
	}

	while (tail->next)
		tail = tail->next;
	tail->next = newNode;
	return (newNode);
}
