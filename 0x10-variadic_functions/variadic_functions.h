#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: int
*/
int _putchar(char c);
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Struct op
 *
 * @c: The data type (char)
 * @f: The function associated with it
 */

typedef struct op
{
	char c;
	void (*f)(va_list);
} op_t;
/**
 * struct dt - struct
 * @letter: letter signifying data type
 * @func: function ptr
 */
typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;
#endif
