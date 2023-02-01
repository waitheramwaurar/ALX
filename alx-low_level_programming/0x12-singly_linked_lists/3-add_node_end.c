#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list
 *
 * @head: the node to be added
 * @str: string to store in the list
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t length;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return NULL;

	new_node->str = strdup(str);

	for (length = 0; str[length]; length++)
		;

	new_node->len = length;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
