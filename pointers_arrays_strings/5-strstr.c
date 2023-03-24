#include "main.h"
/**
 * _strstr - display length of occur
 * @haystack: string
 * @needle: string 2
 * Return: integer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*n == 0)
	{
		return (h);
	}
	for (; *h != '\0'; h++)
	{
		while (*h == *n && *n + 1 != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (h);
		}
	}
	return (0);
}
