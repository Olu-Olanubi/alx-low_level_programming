#include "main.h"
/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */
char *leet(char *s)
{
int prev[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int new[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
int i, j;
for (j = 0; s[j] != '\0'; j++)
{
for (i = 0; prev[i] != '\0'; i++)
{
if (s[j] == prev[i])
s[j] = new[i];
}
}
return (s);
}