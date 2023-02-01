#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beinning of the list
 * @head: the start of the list
 * @n: the new node
 *
 * Return: the address of the new element, 0 if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));

	if (!new_element)
		return (NULL);
	new_element->n = n;

	new_element->next = *head;
	new_element->prev = NULL;

	if (*head)
		(*head)->prev = new_element;
	*head = new_element;
	return (*head);
}
