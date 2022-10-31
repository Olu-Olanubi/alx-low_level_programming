#include "main.h"
#define NULL 0
/**
 *_strchr - locates a character in a string
 * @s: string to be searched through
 * @c: character to be searched for
 * Return: pointer to the first occurrence of c in s or NULL if not found
 */
char *_strchr(char *s, char c)
{
int i  = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (c == '\0')
return (s + i);
return (NULL);
}
