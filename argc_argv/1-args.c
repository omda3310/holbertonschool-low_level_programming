#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: pointer
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i != argc - 1)
	{
		i++;
		argv++;
	}
	printf("%d\n", i);
	return (0);
}
