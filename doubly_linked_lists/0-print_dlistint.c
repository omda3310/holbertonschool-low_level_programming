#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - print all elements of list
 * @h: pointer
 * Return: list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
