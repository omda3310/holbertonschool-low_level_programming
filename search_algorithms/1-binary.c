#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *                 using the binary_search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 * Return: index or null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, h = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		middle = (h + l) / 2;
		i = l;
		printf("Searching in array: ");

		while (i <= h)
		{
			if (i != l)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
			i++;
		}
		printf("\n");
		if (array[middle] < value)
			l = middle + 1;
		else if (array[middle] > value)
			h = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
