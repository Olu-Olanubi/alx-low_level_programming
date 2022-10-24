#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
*/
int _putchar(char c);
/**
 * reset_to_98 - updates the value in a pointer to 98
* @n: input- pointer to an int variable 
*/
void reset_to_98(int *n);
/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b);
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s);
/**

 * _puts - prints a string, followed by a new line, to stdout

 * @str: string to print

 */
void _puts(char *str);
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 */
void print_rev(char *s);
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s);
/**
 * puts2 - print alternating chars of string
 * @str: string
 * Return: void
 */
void puts2(char *str);
#endif
