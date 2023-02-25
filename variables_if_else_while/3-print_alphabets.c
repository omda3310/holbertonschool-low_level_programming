#include<stdio.h>
/**
*main -  description main
*Return: response integer
*
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
