#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Description: print alphabets in lower case in reverse order
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
