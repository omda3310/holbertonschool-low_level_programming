#include "main.h"
/**
 * _strstr - display length of occur
 * @haystack: string
 * @needle: string 2
 * Return: integer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n, *pt = 0;
	h = haystack;
	n = needle;

	if (*n == 0)
	{
		return (h);
	}
	for (; *h != '\0'; h++)
	{
		pt = h;
		while (*h == *n && *n + 1 != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (pt);
		}
	}
	return (0);
}
