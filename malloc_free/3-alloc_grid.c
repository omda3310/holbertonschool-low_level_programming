#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - return 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			p[i] = 0;
		}
	}
	return (p);
}
