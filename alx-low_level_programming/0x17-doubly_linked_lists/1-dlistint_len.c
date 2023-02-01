#include "lists.h"

/**
 * dlistint_len - returns number of elements in doubly linked list
 * @h: the doubly linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements_num = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			elements_num++;
		}
	}
	return (elements_num);
}
