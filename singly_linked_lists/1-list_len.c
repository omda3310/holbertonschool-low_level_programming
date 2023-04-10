#include <stdio.h>
#include "lists.h"
/**
 * list_len - length of list
 * @h: list
 * Return: list
 *
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
