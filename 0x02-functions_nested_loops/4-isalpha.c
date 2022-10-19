#include "main.h"
/**
 *_isalpha - checks for alphabets lowercase or uppercase character
 *
 *@c: character to check
 *
 *Return:1 if true otherwise 0
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
