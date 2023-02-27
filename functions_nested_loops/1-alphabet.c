#include<stdio.h>
#include "main.h"
/**
 * main - check the code
 * print_alphabet -  display alphabet
 * @parameterx: void
 * Return: Always 0.
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
