#include "lists.h"

/**
 * list_len - prints all the elements of a list
 *
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

        while (h != NULL)
        {
		h = h->next;
		number++;
        }
	return (number);
}
