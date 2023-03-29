#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -  concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: integer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		l1++;
	}
	for (j = 0; s2[j]; j++)
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}
	p = malloc((l1 + n + 1) * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
