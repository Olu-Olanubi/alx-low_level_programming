#include "main.h"
/**
 * memset - fills memory with a constant byte.
 * @s: memory area pointed to.
 * @n: number of bytes of memory to be filled
 * @b: constant byte to be filled into memory
 * return - pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
if (n > 0)
{
while (i < n)
{
*(s + i) = b;
i++;
}
}
return (s);
}
