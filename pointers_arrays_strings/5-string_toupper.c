#include "main.h"
/**
 * string_toupper - change to upper
 *
 * @*: string
 * Return: upper
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] < 'z' && c[i] > 'a')
			c[i] -= 32;
		i++;
	}
	return (c);
}
