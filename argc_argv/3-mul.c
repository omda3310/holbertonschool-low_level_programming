#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: pointer
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc <= 2)
	{
		printf("Erreur");
		return (1);
	}
	else
	{
		argc = 1;
		prod = atoi(argv[argc]) * atoi(argv[argc + 1]);
		printf("%d\n", prod);
		return (0);
	}
}
