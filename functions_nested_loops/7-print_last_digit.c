#include "main.h"
/**
 * print_last_digit - last digit
 * @n: variables
 * Return: integer
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar(-n % 10 + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
	return (0);
}
