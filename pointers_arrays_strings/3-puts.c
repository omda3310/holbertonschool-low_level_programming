#include "main.h"
#include <string.h>
/**
 * _puts - display string
 * @str: variable
 *
 */
void _puts(char *str)
{
	int i;
	int l = strlen(str) + 1;

	for (i = 0; i <= l; i++)
	{
		char ch = str[i];

		if (ch == '\n')
			break;
		_putchar(ch);
	}
	_putchar('\n');
}
