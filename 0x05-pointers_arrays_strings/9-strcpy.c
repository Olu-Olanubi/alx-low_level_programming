#include "main.h"
/**
 * _strcpy - copies the string pointed to by src into dest
* @dest: destination
* @src: source
* Return: char with copy of string
 */
char *_strcpy(char *dest, char *src)
{
while (*src)
{
*dest = *src;
src++;
dest++;
}
return (dest);
}
