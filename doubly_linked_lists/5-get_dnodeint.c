#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a list
 * @head: pointer to the first head
 * @index: number of node
 * Return: return node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *current = head;

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }
    if (i != index || current == NULL)
    {
        return (NULL);
    }

    return (current);
}
