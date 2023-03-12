#include "main.h"
/**
 * cap_string - to upper case
 * @c: variable
 * Return: string
 *
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (i == 0)
		{
			if (c[i] <= 'z' && c[i] >= 'a')
			{
				c[i] = c[i] - 32;
			}
		}
		if (c[i] == '.' || c[i] == ' ' || c[i] == '\n' || c[i] == '\t')
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
		i++;
	}
	return (c);
}
