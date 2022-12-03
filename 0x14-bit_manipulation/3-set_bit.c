#include "main.h"
/**
 * set_bit - set bit to 1 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int maxBit;
unsigned long int mask = 1;
/* Check that index is not out of range */
maxBit = (sizeof(unsigned long int) * 8);
if (index > maxBit)
return (-1);
/* create mask with 1 at index (...00100...) to work on that index */
mask <<= index;
*n = (*n | mask);
return (1);
}
