#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: start of the doubly linked list
 * @index: the nth position
 *
 * Return: the nth node, NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head ? head : NULL);
}
