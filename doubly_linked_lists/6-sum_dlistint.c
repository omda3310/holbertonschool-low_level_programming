#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head:  Pointer to the head
 * Return: return sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
