#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the start of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last_node;

	while (head)
	{
		last_node = head->next;
		free(head);
		head = last_node;
	}
}
