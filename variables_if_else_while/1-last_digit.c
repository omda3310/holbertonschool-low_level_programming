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
int n;
int rest;
rest = n%10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (rest > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, rest);
}
else if (rest == 0)
{
printf("last digit of %d is 0", n);
}
else if (rest < 6)
{
printf("lest digit of %d is %d and is greater than 5", n, rest);
}
return (0);
}
