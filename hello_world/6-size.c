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

printf("Size of a char: %ld byte\(s\)\n", sizeof(charType));
printf("Size of an int: %ld byte\(s\)\n", sizeof(integerType));
printf("Size of a long int: %ld byte\(s\)\n", sizeof(longintType));
printf("Size of a long long int: %ld byte\(s\)\n", sizeof(longlongType));
printf("Size of a float: %ld byte\(s\)\n", sizeof(floatType));
return (0);
}
