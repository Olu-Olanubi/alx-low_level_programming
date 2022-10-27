#include "main.h"
/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
unsigned int t, num_digit, positive_digit = n;
double start = 1;
if (n == 0)
_putchar('0');
else
{
if (n < 0)
{
positive_digit = n * -1;
_putchar('-');
}
while (start <= positive_digit)
start *= 10;
t = start / 10;
while (t >= 1)
{
num_digit = positive_digit / t;
_putchar(num_digit + '0');
positive_digit = (positive_digit - (t *num_digit));
t /= 10;
}
}
}
