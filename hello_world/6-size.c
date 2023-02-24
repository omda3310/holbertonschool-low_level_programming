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
long int longintType;
double longlongType;
char charType;

printf("Size of char: %ld byte\(s\)\n", sizeof(charType));
printf("Size of int: %ld byte\(s\)\n", sizeof(integerType));
printf("Size of long int: %ld byte\(s\)\n", sizeof(longintType));
printf("Size of long long int: %ld byte\(s\)\n", sizeof(longlongType));
printf("Size of float: %ld byte\(s\)\n", sizeof(floatType));
return (0);
}
