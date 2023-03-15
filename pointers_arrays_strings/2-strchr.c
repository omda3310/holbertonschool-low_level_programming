#include "main.h"
/**
 * _strchr - display string begins by char
 * @s: string
 * @c: char
 * Return: string
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
