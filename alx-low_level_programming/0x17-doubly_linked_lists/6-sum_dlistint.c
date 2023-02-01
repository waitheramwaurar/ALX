#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of a linked list
 * @head: start of the linked list
 *
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (0);
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
