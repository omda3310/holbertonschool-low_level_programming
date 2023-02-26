#include<stdio.h>
/**
*main -  description
*Return: responses
*/
int main(void)
{
int i;
char ch;
for (i = 0; i < 10; i++)
{
putchar(48 + i);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
