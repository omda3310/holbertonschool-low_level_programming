#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_s -print string
 * @vl: va_list
 * Return: none
 */
void print_s(va_list vl)
{
	char *s;

	s = va_arg(vl, char *);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_c -print character
 * @vl: va_list
 * Return: none
 */
void print_c(va_list vl)
{
	char c;

	c = va_arg(vl, int);
	printf("%c", c);
}
/**
 * print_d -print integer
 * @vl: va_list
 * Return: none
 */
void print_d(va_list vl)
{
	int d;

	d = va_arg(vl, int);
	printf("%d", d);
}
/**
 * print_f -print float
 * @vl: va_list
 * Return: none
 */
void print_f(va_list vl)
{
	float f;

	f = va_arg(vl, double);
	printf("%f", f);
}
/**
 * print_all - print anything
 * @format: all format
 *
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *s = "";
	va_list vl;
	printd dog[] = {
		{"s", print_s},
		{"c", print_c},
		{"i", print_d},
		{"f", print_f}};

	va_start(vl, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(dog[j].c)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", s);
			dog[j].print_func(vl);
			s = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(vl);
}
