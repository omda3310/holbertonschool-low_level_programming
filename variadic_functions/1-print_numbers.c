#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all numbers
 * @separator: separator between numbers
 * @n: number of ontegers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i, tmp;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(vl, int);
		if (separator == NULL)
		{
			printf("%d", tmp);
		}
		if (i < n - 1)
		{
			printf("%d%s", tmp, separator);
		}
		else
		{
			printf("%d", tmp);
		}
	}
	printf("\n");
	va_end(vl);
}
