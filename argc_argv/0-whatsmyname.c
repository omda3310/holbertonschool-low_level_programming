#include <stdio.h>
/**
 * main - print name
 * @argc: counter
 * @argv: pointer of array
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
