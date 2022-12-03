#include "main.h"
/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int maxBits;
/* check that index is within range*/
maxBits = (sizeof(unsigned long int) * 8);
if (index > maxBits)
return (-1);
/* shift number index places right to find bit */
bit = ((n >> index) & 1);
return (bit);
}
