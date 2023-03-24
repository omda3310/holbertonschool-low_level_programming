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

	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle + 1 != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
