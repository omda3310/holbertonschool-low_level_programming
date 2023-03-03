#include "main.h"
/**
 * jack_bauer - display time
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			int r = i % 10;
			int d = i / 10;
			int rr = j % 10;
			int dd = j / 10;

			_putchar(d + '0');
			_putchar(r + '0');
			_putchar(':');
			_putchar(dd + '0');
			_putchar(rr + '0');
			_putchar('\n');
		}
	}
}
