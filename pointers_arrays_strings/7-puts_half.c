#include "main.h"
/**
 * puts_half - display n elements
 *
 * @str: variable
 */
void puts_half(char *str)
{
	int i, n;

	for (n = 0; str[n] != '\0'; n++)
		;
	for (i = n / 2; i < n; i++)
		_putchar(str[i]);
	_putchar('\n');
}
