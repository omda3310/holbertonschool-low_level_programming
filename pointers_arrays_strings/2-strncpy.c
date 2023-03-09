#include "main.h"
/**
 * _strncpy - concat two strings
 * @dest: variable1
 * @src: variable2
 * @n: variable3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
