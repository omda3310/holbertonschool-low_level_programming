#include "main.h"
/**
 * test - compare two integer
 * @i: variable1
 * @j: varianle2
 * Return: value
 * _sqrt_recursion - calculate square root
 * @n: integer
 * Return: value
 */
int test(int i, int j)
{
	if (j == i * i)
	{
		return (i);
	}
	if (j > i * i)
	{
		return (test(i + 1, j));
	}
	else
		return (-1);
}
int _sqrt_recursion(int n)
{
	return (test(1, n));
}
