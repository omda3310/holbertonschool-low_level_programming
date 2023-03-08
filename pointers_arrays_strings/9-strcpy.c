#include "main.h"
/**
 * _strcpy - concat two strings
 * @dest: variable1
 * @src: variable2
 * Return: array of caracters
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
