#include "main.h"
/**
 * _strstr - display length of occur
 * @s: string
 * @accept: string 2
 * Return: integer
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack != '\0'; haystack++)
	{
		while (*haystack == *needle && *needle + 1 != '\0')
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
