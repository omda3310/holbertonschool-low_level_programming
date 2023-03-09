#include "main.h"
/**
 * *_strcat - concat two strings
 * @dest: variable1
 * @src: variable2
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n;

	for (n = 0; dest[n] != '\0'; n++)
		;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	return (dest);
}
