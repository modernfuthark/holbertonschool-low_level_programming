#include "lists.h"
/**
 * add_node_end - Add a node to the end of a list
 * @head: Head of list
 * @str: String to add
 * Return: Adress of new node, NULL on fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp, *gettail;
	char *copy = strdup(str);

	if (!str)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	while (str[len])
		++len;
	temp->str = copy;
	temp->len = len;
	temp->next = NULL;
	gettail = *head;

	if (!*head)
	{
		*head = temp;
		return (*head);
	}

	while (gettail->next)
		gettail = gettail->next;
	gettail->next = temp;
	return (temp);
}
