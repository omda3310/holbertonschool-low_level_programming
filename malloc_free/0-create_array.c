#include "main.h"
#include <stdlib.h>
/**
 * create_array - print array
 * @size: size of pointer
 * @c: caracter
 * Return: return pointer
 */
char *create_array(unsigned int size, char c)
{
    char *p;
    unsigned int i = 0;

    p = malloc(sizeof(char) * size);
    if (size == 0)
    {
        return (0);
    }
    else
    {
        while (i < size)
        {
            p[i] = c;
            i++;
        }
    }
    return (p);
}
