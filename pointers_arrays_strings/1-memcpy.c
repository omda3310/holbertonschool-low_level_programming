#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: string 1
 * @src: string 2
 * @n: number of iteration
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		if (src[i] == '\0' && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
