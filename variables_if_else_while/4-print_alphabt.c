#include <stdio.h>
/**
*main -  description main
*Return: result
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if(alphabet != 'e' && alphabet != 'q')
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
