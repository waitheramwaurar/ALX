#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the searched array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
