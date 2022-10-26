#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
i++;
for (j = 0; j < i; j++)
{
if (src[j] != '\0')
dest[i + j] = src[j];
j++;
}
dest[i + j] = '\0';
return (dest);
}
