#include "main.h"
/**
 * _memset - fills n bytes to string from another
 * @s: string
 * @b: string 2
 * @n: number oh bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        s[i] = s[i] + b;
        i++;
    }
    return (s);
}
