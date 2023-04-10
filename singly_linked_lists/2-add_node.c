#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node -  adds a new node at the beginning of a list
 * @head: list
 * @str: list added
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *tmp;

	if (head && str)
	{
		tmp = malloc(sizeof(list_t));
		if (!tmp)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
			;
		tmp->str = strdup(str);
		tmp->len = i;
		tmp->next = *head;
		*head = tmp;
	}
	return (tmp);
}
