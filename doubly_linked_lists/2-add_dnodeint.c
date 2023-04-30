#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a list
 * @n: varaible
 * @head: pointer
 * Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));

    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head)
        (*head)->prev = new_node;

    *head = new_node;

    return (new_node);
}
