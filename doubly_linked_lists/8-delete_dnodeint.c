#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: point to head list
 * @index: index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		prev = tmp;
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = prev;
	free(tmp);
	return (1);
}
