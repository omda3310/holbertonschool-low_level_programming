#include "main.h"
/**
 * _strpbrk - display length of occur
 * @s: string
 * @accept: string 2
 * Return: integer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (s);
}
