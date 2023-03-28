#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: integer (size)
 * Return: pointer or 98
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p)
		return (p);
	exit(98);
}
