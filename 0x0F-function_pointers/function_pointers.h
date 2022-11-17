#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 * Return: int
*/
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
#endif
