#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked lists
 * @h: the doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_num = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			nodes_num++;
		}
	}
	return (nodes_num);
}
