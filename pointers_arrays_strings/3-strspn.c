#include "main.h"
/**
 * _strspn - display length of occur
 * @s: string
 * @accept: string 2
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, cp = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != 32)
		{
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(s + i) == *(accept + j))
					cp++;
			}
		}
		else
			return (cp);
	}
	return (cp);
}
