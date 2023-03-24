#include "main.h"
/**
 * _strstr - display length of occur
 * @haystack: string
 * @needle: string 2
 * Return: integer
 */
char *_strstr(char *haystack, char *needle)
{
	char *pt = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		pt = haystack;
		while (*haystack == *needle && *needle + 1 != '\0')
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return (pt);
		}
	}
	return (0);
}
