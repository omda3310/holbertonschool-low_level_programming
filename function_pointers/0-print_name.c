#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - print name
 * @name: list name
 * @f: functin
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
