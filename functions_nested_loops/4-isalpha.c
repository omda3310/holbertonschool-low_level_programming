#include "main.h"
/**
* _isalpha - display caracters
* @c: variable
*
* Return: integer
*/
int _isalpha(int c)
{
if (c >= 'a' || c <= 'z' || c >= 'A' || c >= 'Z')
{
_putchar('1');
return (1);
}
else 
{
_putchar('0');
return (0);
}
}
