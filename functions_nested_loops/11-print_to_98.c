#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - display integer
 * @n: init intger
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		printf("%d", n);
		n++;
		for (i = n; i <= 98; i++)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		printf("%d", n);
		n--;
		for (i = n; i >= 98; i--)
		{
			printf(", %d", i);
		}
		printf("\n");
	}
	else
	{
		printf("98\n");
	}
}
