#include <stdio.h>
/**
*main - print types of variables
*
*Return: return 0
*/
int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

printf("Size of int: %ld byte\(s\)\n", sizeof(integerType));
printf("Size of float: %ld byte\(s\)\n", sizeof(floatType));
printf("Size of double: %ld byte\(s\)\n", sizeof(doubleType));
printf("Size of char: %ld byte\(s\)\n", sizeof(charType));

return (0);
}
