#include "main.h"
/**
 * _strchar - display string begins by char
 * @s: string
 * @c: char
 * Return: string
 *
 */
char *_strchr(char *s, char c)
{
    if (c == '\0')
        return (s);
    while (*s)
    {
        if (*s == c)
            return (s);
        s++;
    }
    return (0);
}
