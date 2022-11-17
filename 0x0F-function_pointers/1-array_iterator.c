#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes function on each parameter of the array
 * @array: array of integers
 * @size: Size of array
 * @action: function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
