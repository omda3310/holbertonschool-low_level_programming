#include "main.h"
/**
 * print_rev - reverse elements
 * @s: string
 *
 */
void print_rev(char *s)
{
	int i, l, c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	l =c+1;

	for (i = l -1; i >=0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}
