#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l1 = 0, l2 = 0, L = 0;
	char *p;

	for (i = 0; s1[i]; i++)
		l1++;
	for (j = 0; s2[j]; j++)
		l2++;
	k = l1 + l2;
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	p = malloc(sizeof(char) * (k + 1));
	if (p == 0)
	{
		return (0);
	}
	i = 0;
	j = 0;
	while (i < l1)
	{
		p[L] = s1[i];
		L++;
		i++;
	}
	while (j < l2)
	{
		p[L] = s2[j];
		L++;
		j++;
	}
	return (p);
}
