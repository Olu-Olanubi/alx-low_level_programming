#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns the pointer to a new string, which is copy of the string str
 * @str: argument into function
 * Return: pointer to a new string on success, NULL otherwise
 */
char *_strdup(char *str)
{
char *new_str;
int length, i;
/*Check that string is not NULL*/
if (str == NULL)
{
return (NULL);
}
/*Get length of str*/
length = 0;
while (str[length] != '\0')
{
length++;
}
length++; /*Allows lenght to count null terminator in string*/
new_str = malloc(length * sizeof(char));
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
new_str[i] = str[i];
}
new_str[i] = '\0';
return (new_str);
}
