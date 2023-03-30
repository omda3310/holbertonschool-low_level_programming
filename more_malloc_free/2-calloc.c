#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmenb: number elements
 * @size: size of array
 * Returrn: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		p[i] = '\0';
	}
	return (p);
}
