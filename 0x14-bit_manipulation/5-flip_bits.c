/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: first number
 * @m: second number
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int diff_bits = 0;
unsigned long int difference;
/* Xor both nums to show bit 1 if different bits */
difference = n ^ m;
/* keep shifting difference to right and tallying the ones up */
while (difference > 0)
{
diff_bits += (difference & 1);
difference >>= 1;
}
return (diff_bits);
}
