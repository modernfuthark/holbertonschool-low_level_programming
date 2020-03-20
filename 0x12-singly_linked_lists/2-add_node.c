#include "lists.h"
/**
 * add_node - Add a node to the list
 * @head: Head of the list
 * @str: Name to add to list
 * Return: Adress of new element, NULL on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	char *copy = strdup(str);

	temp = malloc(sizeof(list_t));
	if (!temp || !str)
		return (NULL);

	while (str[len])
		++len;

	temp->len = len;
	temp->str = copy;
	temp->next = *head;
	*head = temp;
	return (temp);
}
