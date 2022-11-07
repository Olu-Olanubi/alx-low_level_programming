#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: character to initialize the array
 * Return: pointer to array on success, NULL if size is 0, or malloc fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
if (size <= 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
*(arr + i) = c;
}
return (arr);
}
