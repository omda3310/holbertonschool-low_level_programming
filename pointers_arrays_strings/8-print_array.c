#include "main.h"
#include <stdio.h>
/**
 * print_array - display n elements
 * @n: numer of variable
 * @a: count
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else if (i < n)
			printf(", %d", a[i]);
	}
	printf("\n");
}
