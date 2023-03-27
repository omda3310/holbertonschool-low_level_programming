#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate of string
 * @str: string
 * Return: duplicate of string
 *
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	p = malloc(sizeof(char) * (i + 1));
	if (p == 0)
	{
		return (0);
	}
	else
	{
		while (j < i)
		{
			p[j] = str[j];
			j++;
		}
		return (p);
	}
}
