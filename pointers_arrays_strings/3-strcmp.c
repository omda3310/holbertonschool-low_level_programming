#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: etring 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 > *s2)
			return (15);
		if (*s1 < *s2)
			return (-15);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-15);
	return (0);
}
