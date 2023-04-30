#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint -  frees a list.
 * @head: This is a pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
