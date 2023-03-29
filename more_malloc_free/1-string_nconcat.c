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
	unsigned int l, l1, l2, i, j = 0;
	char *p;

	l = n;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1; i++)
	{
		l1++;
	}
	for (j = 0; s2; j++)
	{
		l2++;
	}
	if (l >= l2)
	{
		l = l2;
	}
	p = malloc((l1 + l2 + 1) * sizeof(char));
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < l2 + n; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}
