#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: pointer
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
