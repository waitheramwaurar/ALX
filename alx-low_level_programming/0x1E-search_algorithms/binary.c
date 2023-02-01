#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t m = size/2;
	/*int mid = array[m];*/
	size_t left = m - 1;
	size_t right = m + 1;
	size_t j;

	if (!array || size == 0)
		return (-1);

	if (array[left] > value)
	{
		printf("Searching in array: ");
		for (i = 0; i <= left; i++)
		{
			if (i == left)
				printf("%lu", i);
			else
				printf("%lu, ", i);

			if (array[i] == value)
				return (i);
		}
		printf("\n");
	}
	else
	{
		printf("Searching in array: ");
		for (i = right; i < size; i++)
                {
                        if (i == size - 1)
                                printf("%lu", i);
                        else
                                printf("%lu, ", i);

                        if (array[i] == value)
                                return (i);
                }
		printf("\n");
	}
	return (-1);
}
