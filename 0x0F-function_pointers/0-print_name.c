#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that prints a name
 * @name: pointer to a string
 * @f: pointer to a function that takes a string as argument
 * Return: pvoid
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
