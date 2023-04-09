#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * @h: string
 * Return: length of string
 */
size_t print_list(const list_t *h)
{
	int n;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
			printf("%d%s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
