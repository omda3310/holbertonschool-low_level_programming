#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - operations between two integers
 * @argc: number of variables
 * @argv: array of operations
 * Return: result
 */
int main(int argc, char *argv[])
{
    char *op;
    int r, num1, num2;

    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    op = argv[2];
    if ((op[0] == '/' && num2 == 0) || (op[0] == '%' && num2 == 0))
    {
        printf("Error\n");
        exit(100);
    }
    if (op[1] != '\0' || !num1 || !num2 || !get_op_func(op))
    {
        printf("Error\n");
        exit(99);
    }
    r = get_op_func(op)(num1, num2);
    printf("%d\n", r);
    return (0);
}