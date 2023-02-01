#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: the start of the list
 * @n: the new node's data
 *
 * Return: the address of the new element, NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem;
	dlistint_t last_node = *head;

	if (!head)
		return (NULL);

	new_elem = malloc(sizeof(dlistint_t));

	if (!new_elem)
		return (NULL);
	new_elem->n = n;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		new_elem->prev = NULL;
		*head = new_elem;
		return (*head);
	}

        while (last_node->next)
                last_node = last_node->next;
	new_elem->prev = last_node;
	last_node->next = new_elem;

	return (*new_elem);
}
