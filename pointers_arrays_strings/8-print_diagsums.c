#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @size: integer
 * @a: string
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i <= size * size; i = i + size + 1)
	{
		sum1 += a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + size - 1)
	{
		sum2 += a[j];
	}
	printf("%ld, %ld \n", sum1, sum2);
}
