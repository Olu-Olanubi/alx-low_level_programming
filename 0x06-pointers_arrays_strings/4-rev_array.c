#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
int rev, i;
int j = n - 1;
for (i = 0; i < j; i++)
{
rev = a[i];
a[i] = a[j];
a[j] = rev;
i++;
j--;
}
}
