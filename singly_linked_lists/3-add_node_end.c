#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end -  adds a new node at the end of a list
 * @head: list 1
 * @str: end node
 * Return: adress of the node at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *tmp, *l;

	if (str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
			;
		tmp->str = strdup(str);
		tmp->len = i;
		tmp->next = NULL;
		if (*head == NULL)
		{
			*head = tmp;
			return (*head);
		}
		else
		{
			l = *head;
			while (l->next)
			{
				l = l->next;
			}
			l->next = tmp;
			return (l);
		}
	}
	return (NULL);
}
