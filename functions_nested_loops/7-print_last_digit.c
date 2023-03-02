#include "main.h"
/**
 * print_last_digit - last digit
 * @n: variables
 * Return: integer
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		_putchar(-r + '0');
		return (-r);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
	return (0);
}
