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
return (1);
return (0);
}
