#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - description main
*Return: result 0
* betty style doc for function main goes there
*/
int main(void)
{
int n, rest;
srand(time(0));
n = rand() - RAND_MAX / 2;
rest = n % 10;
if (rest > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, rest);
}
else if (rest == 0)
{
printf("last digit of %d and is 0", n);
}
else if (rest < 6)
{
printf("lest digit of %d is %d and is less than 6 and not 0", n, rest);
}
return (0);
}
