#include "main.h"
/**
 * times_table - 9 times
 *
 * Return: None
 */
void times_table(void)
{
	int i, j, mult, d, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			d = mult / 10;
			r = mult % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (mult <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
