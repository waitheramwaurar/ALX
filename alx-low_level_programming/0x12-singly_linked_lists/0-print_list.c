#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		number++;
	}
	return (number);
}
