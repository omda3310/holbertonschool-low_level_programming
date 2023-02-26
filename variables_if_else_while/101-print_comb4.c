#include<stdio.h>
/**
*main -  descriptions
*Return: responses
*/
int main(void)
{
int i;
int j;
int k;
for (i = '0'; i <= '9'; i++)
{
for (j = '1'; j <= '9'; j++)
{
for (k = '3'; k <= '9'; k++)
putchar(i);
putchar(j);
putchar(k);
putchar(',');
putchar(' ');
}
}
}
}
