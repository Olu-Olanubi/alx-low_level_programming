#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, i, j;
char *strconcat;
len1 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
{
len1++;
}
len2 = 0;
while (s2[len2] != '\0')
{
len2++;
}
strconcat = malloc(1 + (len1 + len2) *sizeof(char));
if (strconcat == NULL)
return (NULL);
i = 0;
while (i < len1)
{
strconcat[i] = s1[i];
i++;
}
j = 0;
while (j < len2)
{
strconcat[i + j] = s2[j];
j++;
}
strconcat[i + j] = '\0';
return (strconcat);
}
