#include "main.h"
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
int half = n / 2;
int left, right, i;
n -= 1;
for (i = 0; i < half; i++)
{
left = a[n - i];
right = a[i];
a[i] = left;
a[n - i] = right;
}
}
