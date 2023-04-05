#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_string - print string
 * @s: pointer to string
 */
void print_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		printf("%c", s[i]);
	}
}
/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	char *st;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(vl, char *);
		if (st != NULL)
		{
			if (separator == NULL)
			{
				print_string(st);
			}
			else if (i < n - 1)
			{
				print_string(st);
				printf("%s", separator);
			}
			else
			{
				print_string(st);
			}
		}
		else if (i < n - 1)
		{
			printf("(nil)%s", separator);
		}
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(vl);
}