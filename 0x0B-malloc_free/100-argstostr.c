#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
/**
 * argstostr - concatenates all the arguments.
 * @grid: grid to be freed 
 * @height: height of array
 * Return: pointer to 2D array
 */
char *argstostr(int ac, char **av)
{
char *s;
int length = 0, i, j, k = 0;
if(ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
length += _strlen(av[i]);
}
length += (ac + 1); /* add space for newlines and null terminator */
/* allocate memory and free if error */
s = malloc(length * sizeof(char));
if (s == NULL)
{
free(s);
return (NULL);
}
/* insert each arg into *str */
for (i = 0; i < ac; i++)
{
for (j = 0; j < _strlen(av[i]); j++)
{
s[k++] = av[i][j];
}
s[k++] = '\n';
}
return (s);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
len++, s++;
return (len);
}
