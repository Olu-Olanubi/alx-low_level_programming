#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 *  Return: On success 1, -1 if error
*/
int _putchar(char c);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
