#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: pointer
 *
 * @n: size of pointer
 */
void reverse_array(int a[], int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int p;

		p = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = p;
	}
}
