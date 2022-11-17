#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print varying amount of numbers
 * @separator: string to be printed between the numbers
 * @n: number of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
if (n > 0)
{
va_start(args, n);
for (i = 1; i <= n; i++)
{
printf("%d", va_arg(args, int));
if (i != n && separator != NULL)
printf("%s", separator);
}
va_end(args);
}
printf("\n");
}
