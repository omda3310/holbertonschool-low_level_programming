#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - print the length  of list
 * @h: pointer
 * Return: number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
    int node = 0;

    while (h)
    {
        h = h->next;
        node++;
    }
    return (node);
}
