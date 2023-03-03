#include "main.h"
/**
 * times_table - 9 times
 *
 * Return: None
 */
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;

			if (mult <= 9)
			{
				_putchar(mult + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				int d = mult / 10;
				int r = mult % 10;

				_putchar(d + '0');
				_putchar(r + '0');
				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
