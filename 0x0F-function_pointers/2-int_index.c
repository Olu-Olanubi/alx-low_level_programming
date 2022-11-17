#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches or an integer
 * @array: array of integers
 * @size: Size of array
 * @cmp: comparison function
 * Return: index of first element for which cmp does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return (-1);
i = 0;
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
return (-1);
}
