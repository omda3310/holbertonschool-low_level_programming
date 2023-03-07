#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: string
 */
void rev_string(char *s)
{
	int i, j, c;
	char pp;

	for (c = 0; s[c] != '\0'; c++)
		;
	for (i = 0, j = c - 1; i < j; i++, j--)
	{
		pp = s[i];
		s[i] = s[j];
		s[j] = pp;
	}
}
