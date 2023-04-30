#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head:  This is a pointer
 * @n: This is the integer value
 * Return: address of the new element, or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	/* create the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		/* handle the case where the list is empty */
		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
			return (new_node);
		}

		/* traverse to the end of the list */
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		/* link the new node to the end of the list */
		new_node->prev = current;
		current->next = new_node;

		return (new_node);
	}
}
