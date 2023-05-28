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
	size_t i, l, r;

	if (!array)
	{
		return (-1);
	}
	for (l = 0, r = size - 1; r > l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = l + (r - l) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			r = i - 1;
		}
		else
		{
			l = i + 1;
		}
	}
	return (-1);
}
