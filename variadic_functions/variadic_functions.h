#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#include <stdarg.h>
/**
 * struct print - data struct
 * @c:char
 * @print_func: function pointers
 */
typedef struct print
{
    char *c;
    void (*print_func)(va_list vl);
} printd;

#endif
