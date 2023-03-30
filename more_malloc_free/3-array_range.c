#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: integer min
 * @max: integer max
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
