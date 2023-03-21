#include "main.h"
/**
 * _strstr - display length of occur
 * @s: string
 * @accept: string 2
 * Return: integer
 */
char *_strstr(char *s, char *accept)
{
	int i, n;
	char *pt;

	if (*accept == 0)
		return (s);
	for (i = 0, n = 0; accept[n] != '\0'; i++)
	{
		if (s[i] == accept[n])
		{
			if (n == 0)
				pt = &s[i];
			if (accept[n + 1] == '\0')
				return (pt);
			++n;
		}
		else
			n = 0;
		return (0);
	}
}
