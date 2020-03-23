#include "lists.h"
/**
 * add_nodeint - Add a node to the star of a list
 * @head: Head of list
 * @n: int to use in new node
 * Return: Adress of new node, NULL on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
