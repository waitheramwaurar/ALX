#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: the node to be added
 * @str: stirng to store in the list
 *
 * Return: address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t length;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);

	for (length = 0; str[length]; length++)
		;

	new_node->len = length;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
