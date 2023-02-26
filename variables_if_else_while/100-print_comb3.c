#include<stdio.h>
/**
*main -  descriptions
*Return: responses
*/
int main(void)
{
int i;
int j;
for (i = '0'; i <= '9'; ++i)
{
for (j = '1'; j <= '9'; ++j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
}
}
}
