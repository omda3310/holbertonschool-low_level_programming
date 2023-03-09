#include "main.h"
/**
 * _strncat - concat  n caracters
 * @dest: vaviable1
 * @src: variable2
 * @n: variable3
 * @n: number elements
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c;

	for (c = 0; dest[c] != '\0'; c++)
		;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	return (dest);
}
